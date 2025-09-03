//Problem 4(Find kth largest element)
#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n ;
    cout<<"\nEnter size of array:";
    cin>>n;
    cout<<"\nEnter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"\nEnter k value:";
    cin>>k;

    int low = 0;
    int high = n - 1;

    // We want the (n - k)th smallest element
    int indexToFind = n - k;

    while (low <= high) {
        int p = arr[high];  // use last element as pivot
        int i = low;

        // Partition the array
        for (int j = low; j < high; j++) {
            if (arr[j] <= p) {
                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }
        }

        // Place pivot in correct position
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;

        // Check pivot position
        if (i == indexToFind) {
            cout << "Output: [" << arr[i] << "]" << endl;
            break;
        }
        else if (i < indexToFind) {
            low = i + 1;
        }
        else {
            high = i - 1;
        }
    }

    return 0;
}
