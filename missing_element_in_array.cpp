// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    // Example array with a missing number
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // +1 to account for the missing number
    int total_sum = n * (n + 1) / 2;          // Sum of first n natural numbers
    int actual_sum = 0;

    // Calculate the actual sum of the array
    for (int i = 0; i < n - 1; i++)
    {
        actual_sum += arr[i];
    }

    // The difference is the missing number
    cout << "Missing number: " << total_sum - actual_sum << endl;

    return 0;
}
