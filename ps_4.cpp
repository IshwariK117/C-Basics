
// longest string in sentence

#include <iostream>
using namespace std;

void max_length(string s1)
{
    int max = 0, current = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ')
        {
            if (current > max)
            {
                max = current;
                current = 0;
            }
        }
        else
        {
            current++;
        }
    }
    cout << "max length is :" << max;
}

int main()
{
    string sentence;
    cout << "Enter sentence;";
    getline(cin, sentence);
    // cout<<sentence;
    max_length(sentence);

    return 0;
}