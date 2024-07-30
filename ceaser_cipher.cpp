// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    string CT = "";
    int key = 3;
    cout << "Enter the string you want to convert into cipher text: ";
    getline(cin, input); // Use getline to read the entire line, including spaces

    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];
        if (isalpha(c))
        { // Only shift alphabetic characters
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + key) % 26 + base;
        }
        CT += c; // Append the character to the cipher text
    }

    cout << "Cipher text: " << CT << endl;
    return 0;
}
