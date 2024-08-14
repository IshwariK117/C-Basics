#include<iostream>
#include <cmath> // Use <cmath> for math functions like pow()
using namespace std;

// Function to count the number of digits in a number
int count_digit(int n){
    int count = 0;
    
    while(n > 0){
        count++;
        n = n / 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int n, int digit){
    int ans = 0;
    int num = n;
    while(num > 0){
        int rem = num % 10;
        ans += pow(rem, digit);
        num /= 10;
    }

    // Check if the calculated sum is equal to the original number
    return (ans == n);
}

int main(){
    int num;
    cout << "Enter number to count digits and check if it's an Armstrong number: ";
    cin >> num;

    int digit = count_digit(num);  // Count the number of digits
    cout << "Number of digits: " << digit << endl;

    // Check if the number is an Armstrong number
    if(isArmstrong(num, digit)){
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
