
// count the characters in word of uppercase nd lowercase 
//and coutnt the char of upper and lower
//if upper_count>lower_count   then convert all in uppercase 
//else convert into lowercase



#include <iostream>
#include <cctype>
using namespace std;


void lower_upper(string s)
{
    int u_count = 0, l_count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            u_count++;
        }
        else if (islower(s[i]))
        {
            l_count++;
        }
    }

    if (u_count > l_count)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }


    cout<<s;
}

int main()
{

    string sentence;
    cout << "Enter sentence;";
    getline(cin, sentence);
    lower_upper(sentence);
    return 0;
}