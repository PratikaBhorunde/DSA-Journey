#include<iostream>
using namespace std;

// Custom merge function to push zeroes to end and maintain non-zero order
void merge(int arr[], int left, int mid, int right) {
    int temp[100];
    int k = 0; //total number of non zero numbers 

    // First, copy non-zero elements from left half
    for (int i = left; i <= mid; i++) {
        if (arr[i] != 0)
            temp[k++] = arr[i];
    }
    
    // Then, copy non-zero elements from right half
    for (int i = mid + 1; i <= right; i++) {
        if (arr[i] != 0)
            temp[k++] = arr[i];
    }

    // Now, fill the rest with zeroes
    for (int i = left; i <= right; i++) {
        if (k > i - left)
            arr[i] = temp[i - left];
        else
            arr[i] = 0;
    }
}
void mergeZeroPush(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeZeroPush(arr, left, mid);
        mergeZeroPush(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {0, 12, 0, 6, 0, 17, 9, 0, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printarray(arr, n);

    mergeZeroPush(arr, 0, n - 1);

    cout << "Zeroes pushed to end: ";
    printarray(arr, n);
}
