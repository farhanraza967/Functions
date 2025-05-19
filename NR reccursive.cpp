#include <iostream>
#include <cmath>
using namespace std;
double NewtonRaphson(double n, double x, double precision = 0.00001) {
    if (fabs(x*x - n) < precision)
        return x;
    double nextGuess = 0.5*(x+ n/x);
    return NewtonRaphson(n, nextGuess, precision);
}
int main(){
    double number;
    cin>> number;
    double result = NewtonRaphson(number, number / 2);
    cout << "Square root of " << number << " is approximately: " << result;
    return 0;
}
