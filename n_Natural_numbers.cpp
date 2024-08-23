// n_Natural_numbers.cpp

//sum of N-natural numbers

#include <iostream>
using namespace std;

int main()

{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}