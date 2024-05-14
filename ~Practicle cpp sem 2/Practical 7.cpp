//  Write a program  to calculate GCD(greatest common divisor) of two numbers

#include <iostream>
using namespace std;

// (i) with recursion
int gcdWithRec(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdWithRec(b, a % b);
}

// (ii) without recursion
int gcdWithoutRec(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }

    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // With recurrsion
    // cout << "GCD: " << gcdWithRec(a, b) << endl;

    // without recursoin
    cout << "GCD: " << gcdWithoutRec(a, b) << endl;

    return 0; 
}