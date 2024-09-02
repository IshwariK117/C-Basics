

// two sum of subarray

#include <iostream>
using namespace std;

void two_sum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Indices of elements that sum to " << target << " are: " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "No pair of elements sum to " << target << endl;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    int target;
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target sum: ";
    cin >> target;

    two_sum(arr, n, target);
    return 0;
}
