#include <iostream>
#include <string> // Include the string library

using namespace std;

int main()
{
    string string1 = "hello";
    string reversed = ""; // Initialize an empty string for the reversed result

    // Loop through the string from the end to the beginning
    for (int i = string1.length() - 1; i >= 0; i--)
    {
        reversed += string1[i]; // Append each character to the reversed string
    }

    // Print the reversed string
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
