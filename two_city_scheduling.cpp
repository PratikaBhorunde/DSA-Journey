#include <iostream>
#include <algorithm>   // for sort
using namespace std;

int main() {
    int costs[4][2] = {{10,20}, {30,200}, {400,50}, {30,20}}; // input
    int n = 4;  // total people
    int half = n / 2;

    int total = 0;
    int change[100];  // to store B - A differences

    // Step 1: assume all go to A
    for(int i = 0; i < n; i++) {
        total += costs[i][0];         // add A cost
        change[i] = costs[i][1] - costs[i][0]; // how much extra/saving if sent to B
    }

    // Step 2: sort the change array
    sort(change, change + n);

    // Step 3: pick smallest half to switch to B
    for(int i = 0; i < half; i++) {
        total += change[i];
    }

    cout << "Minimum Cost: " << total << endl;
    return 0;
}
