/* 
* Write a program to compute the sum of the first n terms of the following series:
𝑆  ....
The number of terms n is to be taken from the user through the command line. If the
command line argument is not found then prompt the user to enter the value of n.
*/

#include <iostream>
#include <math.h>
using namespace std;

double series_sum(int n) {
    double sum = 0.0;

    for (int i = 1; i < n; ++i) {
        double term = pow(-1, i+1)*(1.0 / pow(i,i));
        sum += term;
    }
    return sum;
}

int  main() {
    int n;

    cout << "Enter nth term of the series: ";
    cin >> n;

    double series_Sum = series_sum(n);
    cout << "Sum of the first " << n << "terms of the series: " << series_Sum << endl;

    return 0;
}
