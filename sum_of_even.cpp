// sum_of_even.cpp

#include <iostream>
using namespace std;

int main()
{
    int n, i, arr[10],sum=0;
    cout << "enter size array";
    cin >> n;
    cout << "Enter "<<n<<" numbers";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum+=arr[i];
        }
    }

    cout<<sum;

    return 0;
}