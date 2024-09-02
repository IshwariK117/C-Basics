#include <iostream>
#include <string>

using namespace std;

int countSubsequencesABC(const string &s)
{
    int countA = 0, countB = 0, countC = 0;

    for (char c : s)
    {
        if (c == 'a')
        {
            countA++;
        }
        else if (c == 'b')
        {
            countB++;
        }
        else if (c == 'c')
        {
            countC++;
        }
    }

    if (countA < countB && countA < countC)
    {
        return countA;
    }
    else  if (countB < countA && countB < countC)
    {
        return countB;
    }
    else{
        return countC;
    }
    
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countSubsequencesABC(s);
    cout << "Maximum number of subsequences 'abc': " << result << endl;

    return 0;
}
