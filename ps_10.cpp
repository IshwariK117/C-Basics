/*
write a program that takes four integers as input and outputs the sum of all negative
integers. if there are no negative integers ,the output should be 0.


input :-3 ,7,-1,4
output:-4

*/

#include<iostream>
using namespace std;

int negativeSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
           sum+=arr[i];
        } 
    }
    return sum;

}


int main(){
    int n=4,i;
    int arr[n];
    int sum=0;
    cout<<"enter array";
    for(i=0;i<n;i++){
         cin>>arr[i];
    }

   int check= negativeSum(arr,n);
   cout<<check;

    return 0;
}