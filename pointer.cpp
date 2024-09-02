#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int *p = &i; // p is a pointer to i
    int *q = p;  // q is also a pointer to i

    *q = 5; // changing the value pointed by q (which is i)
    cout << *p; // prints the value at address pointed by p (i.e., 5)

    return 0;
}
