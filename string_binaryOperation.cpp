#include <iostream>
using namespace std;

int i = 0;

string binaryAnd(string s1, string s2)
{
    string result = " ";
    for (i = 0; i < s1.length(); i++)
    {

        if (s1[i] == '1' && s2[i] == '1')
        {
            result += '1';
        }
        else
        {
            result += '0';
        }
    }
    return result;
}

string binaryOr(string s1, string s2)
{
    string result = " ";
    for (i = 0; i < s1.length(); i++)
    {

        if (s1[i] == '1' || s2[i] == '1')
        {
            result += '1';
        }
        else
        {
            result += '0';
        }
    }
    return result;
}

string binaryXor(string s1, string s2)
{
    string result = " ";
    for (i = 0; i < s1.length(); i++)
    {
        if(s1[i]!=s2[i]){
            result+='1';
        }
        else{
            result+='0';
        }
    }
    return result;
}

int main()
{
    int i = 0;
    string s1 = "1010";
    string s2 = "0101";
    string g = binaryAnd(s1, s2);
    cout << g<<endl;
    cout << binaryOr(s1, s2) << endl;
    cout << binaryXor(s1, s2) << endl;
    return 0;
}