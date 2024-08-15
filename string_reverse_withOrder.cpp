#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverse_sentence(string &s)
{
    string word = "";
    vector<string> stack;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            stack.push_back(word); // Push the current word into the stack
            word = ""; // Reset word to collect the next word
        }
        else
        {
            word += s[i]; // Accumulate characters to form the current word
        }
    }

    // Push the last word to the stack
    stack.push_back(word);

    // Print the words in reverse order
    for (int i = stack.size() - 1; i >= 0; --i)
    {
        cout << stack[i];
        if (i > 0)
        {
            cout << " "; // Print space between words
        }
    }
}

int main()
{
    string str = "hello ishwari";
    reverse_sentence(str);

    return 0;
}
