#include <iostream>
using namespace std;

int main()
{ // code  here
    int cnt = 0;
    int N;
    cout << "enter";
    cin >> N;
    int rem = N % 10;
    if (N % rem == 0)
    {
        cnt++;
        N = N / 10;
    }

    return cnt;
}
