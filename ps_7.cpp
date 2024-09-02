#include<iostream>
#include<cmath>
using namespace std;



void cal_energy(int n) {
    int power = 1; // Start with power = 2^0 = 1
    int cnt = 0;   // Counter for the number of times we've multiplied by 2

    // Loop until the power of 2 exceeds or equals n
    while (power*2 < n) {
        power *= 2; // Multiply power by 2
        cnt++;      // Increment the count
    }  

    int rem=n-power;
    
    
    cout<< power << rem << endl;
}
int main()
{
    int n;
    cout<<"enter initial energy";
    cin>>n;
    cal_energy(n);
    return 0;
}