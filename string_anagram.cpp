#include<iostream>
#include<algorithm>  // Required for the sort function
using namespace std;

bool checkAnagram(string s1, string s2) {
    sort(s1.begin(), s1.end());  // Corrected to use begin() and end()
    sort(s2.begin(), s2.end());

    return s1 == s2;  // Return boolean value
}

int main() {
    string s1 = "listen";
    string s2 = "silent";
    
    // Output the result
    if (checkAnagram(s1, s2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    
    return 0;
}
