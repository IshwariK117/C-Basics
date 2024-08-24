/*
Problem Description:
The function accepts an integer array ‘arr’ of size ‘n’ as its argument. Each element of ‘arr’
represents the number of chocolates distributed to a person. The function needs to return the
minimum number of chocolates that need to be distributed to each person so that the difference
between the chocolates of any two people is minimized.

Example:
Input:
n: 5
arr: 10 4 12 3 1
Output:
3
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{

    int n, i, j;
    cout << "enter array size";
    cin >> n;
    int arr[n];
    int min_diff = INT_MAX;
    int differ = 0;
    cout << "enter array";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (i = 0; i < n-3; i++)
    {
        differ=arr[i+2]-arr[i];
        if(differ<min_diff){
            min_diff=differ;

        }
        
    }
 
 cout<<min_diff;


    return 0;
}