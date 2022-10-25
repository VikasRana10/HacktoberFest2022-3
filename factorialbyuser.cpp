//Find the factorial of a number entered by user(Issue no 5)
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    long fact = 1.0;

    cout << "Enter a positive integer";
    cin >> num;

    if (num < 0)
        cout << "Error! negative number factorial doesn't exist";
    else {
        for(int i = 1; i <= num; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << num << " = " << fact;    
    }

    return 0;
}
