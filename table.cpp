#include <iostream>
using namespace std;
int main()
{

    int multiplier = 10;
    int n;
    cout << "which table do you want??  ";
    cin >> n;
    while (multiplier > 0)
    {
        cout << multiplier * n << " ";
        multiplier--;
    }
}