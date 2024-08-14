#include<iostream>
using namespace std;


string replaceChar(string str,char ch1,char ch2){
    string result=str;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch1){
            result[i]=ch2;
        }
      
    }
     return result;
}
int main(){
    string s="apple";
    char ch1='a';
    char ch2='q';
    cout<<replaceChar(s,ch1,ch2);
    return 0;
}