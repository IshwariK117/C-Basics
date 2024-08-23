// reverse the number by first extracting last digit,after digit
//will be multiply by 10 + reverse value;
//and again extract last second and first digit by dividing it

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to reverse it";
    cin>>n;
    int rev=0;

   while(n>0){
    int rem=n%10;
    rev=rev*10+rem;
    n/=10;
   }

   cout<<rev;
    return 0;
}