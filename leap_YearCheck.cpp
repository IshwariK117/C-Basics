/*
-any year divisible by 4 is leap year
ex.2012%4=0
-what if it is century year like 1900
 it divided by  100 then it must divisible by 400 to be  leap year
 so i will say if the number is divided by 100   and not 400 then it not leap year

*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "enter the year to check if its leap tear or not..";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "leap year";
            }
            else{
                cout<<"not leap year";
            }
        }
        else{
            cout<<" leap year";
        }
    }
    else{
        cout<<"not leap year";
    }

   

    return 0;
}