
/*
The function accepts a character array ‘arr’ of size ‘n’ as its argument. Each element of ‘arr’
represents the status of a parking slot, where ‘S’ represents an empty slot and ‘X’ represents an
occupied slot. The function needs to return the maximum number of cars that can be parked in
the parking lot. It is assumed that two cars cannot occupy the same slot and cars can only park
in consecutive empty slots.
Example:
Input:
n: 16
arr: XXXSXXSXXSSXXSXX
Output:
5
*/

#include <iostream>
using namespace std;

int max_car(int arr[], int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]=='S'){
            count++;
        }
    }
    return count;
}
int main()
{
    int n, i,count=0;
    cout << "Enter array size";
    cin >> n;
    int arr[n];
    cout << "Enter array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max_car(arr, n);
    cout<<count;
    return 0;
}