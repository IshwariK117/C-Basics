/*
input:
r-no.of rats
unit-amount of food rat consume
arr[n]-amount of food present in each house

output:
4

logic:
-iterate each loop
-add and after each addition compare add> required food item;
*/

#include<iostream>
using namespace std;


void checkfood(int r,int unit,int arr[],int n){s
    int sum=0;
    int req=r*unit;

      for(int i=0;i<n;i++){
          sum+=arr[i];
        if(sum>=req){
      
           cout<<i+1;
           return;
        }
      }

    cout<<sum;
}

int main(){
    int r,unit,i,n;
     
    cout<<"enter rats count";
    cin>>r;
    cout<<"enter food required";
    cin>>unit;
    cout<<"enter amount of element ";
    cin>>n;
     int arr[n];
    cout<<"enter amount of food present in each house";
    for(i=0;i<n;i++){
          cin>>arr[i];
    }

    checkfood(r,unit,arr,n);


    return 0;

}