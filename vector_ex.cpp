#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(vector<int> e)
{
    for (int i = 0; i < e.size(); i++)
    {
        cout<<e[i]<<endl;
    }
    
}

int main()
{
    vector<int> n;
    int ele;
    for (int i = 0; i < 4; i++)
    {
        cout << "enter no: ";
        cin >> ele;
        n.push_back(ele);
    }
    display(n);
    return 0;
}

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    return 0;
}*/