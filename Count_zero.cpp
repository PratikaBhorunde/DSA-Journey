//DATA STRUCTURE AND ALGORITHM 
// PROBLEM 1

#include <iostream>
using namespace std;

int countZeroes(int arr[], int n) {
int left = 0;
int right = n - 1;
int firstZeroIndex = n;
    
while (left <= right) {
int mid = (left + Right) / 2;
if (arr[mid] == 0) {
firstZeroIndex = mid;
right = mid - 1; 
}
else {
left = mid + 1;        
}
}
    
return n - firstZeroIndex;
}

int main() {
int arr[] = {1, 1, 1, 0, 0, 0, 0, 0};
int n = sizeof(arr) / sizeof(arr[0]);   
int zeroCount = countZeroes(arr, n);
cout << "Number of zeroes: " << zeroCount << endl;
return 0; 
}

int countzeroes(int arr[], int n) {
int left = 0;
int right = n - 1;
int firstzeroindex = n;

while(left <= right) {
int mid = (left + right) / 2;
if(arr[mid] == 0) { 
firstzeroindex = mid;
right = mid - 1;
}
else {
left = mid + 1;
}
}
return n - firstzeroindex;
}

int main() {
int arr[] = {1,1,1,0,0,0,0};
int n = sizeof(arr)/ sizeof(arr[0]);
int totalzero(arr, n);

return 0;
}
