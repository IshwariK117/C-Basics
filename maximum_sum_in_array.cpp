#include <iostream>
using namespace std;

int main()
{
    int n = 8, i, j;
    int sum = 0, max_sum = 0;
    int arr[] = {6, 3, 3, 8, 4, 7, 4, 3};
    /*cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }*/

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                sum = arr[i] + arr[j];
                if (sum > max_sum)
                {
                    max_sum = sum;
                }
            }
        }
    }

    cout << max_sum;

    return 0;
}
