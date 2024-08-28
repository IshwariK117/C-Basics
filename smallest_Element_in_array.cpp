#include <iostream>
#include <algorithm>
#include <climits>  // Include this header for INT_MIN

using namespace std;

int main() {
    int arr[] = {25, 30, 22, 28, 35};
    int n = sizeof(arr) / sizeof(int);
    int lg = INT_MIN;  // Initialize to the smallest possible integer
    int slg = INT_MIN; // Initialize to the smallest possible integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > lg) {
            // Update second largest first, then update the largest
            slg = lg;
            lg = arr[i];
        } else if (arr[i] > slg && arr[i] != lg) {
            // Update the second largest if it's less than the current element
            // and not equal to the largest
            slg = arr[i];
        }
    }

    cout<<slg;
    return 0;
}
