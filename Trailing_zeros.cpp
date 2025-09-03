//Problem Statement 3
#include <iostream>
using namespace std;

int counttrailingzeros(int x) {
    int count = 0;
    for(int i=5; x/i >= 1; i *=5) {
        count+= x/i;
    }
    return count;
}

int findnumberwithtrailingzero(int n) {
    int low = 0, high = 5*n, ans= -1;
    
    while(low<=high) {
        int mid = (low + high) / 2;
        int zeros = counttrailingzeros(mid);
    
    if(zeros >= n) {
        ans = mid;
        high = mid - 1;
    }
    else {
        low = mid + 1;
    }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter number of trailing zeroes:";
    cin>>n;
    int result = findnumberwithtrailingzero(n);
    cout<<"Smallest number whose factorial has "<<n<<" trailing zeros is "<<result<<endl;
    
    return 0;
    
}
