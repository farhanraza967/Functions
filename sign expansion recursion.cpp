#include <iostream>
#include <cmath>
using namespace std;
double sinxRecursive(double x, double term, int n = 1, double sum = 0.0) {
    if (fabs(term) < 0.0001)
        return sum;
    sum += term;
    term *= -1 * x * x / ((2 * n) * (2 * n + 1));
    return sinxRecursive(x, term, n + 1, sum);
}
int main() {
    double angle;
    cin>> angle;
    double result = sinxRecursive(angle, angle);
    cout << "sin(" << angle << ") = " << result;
    return 0;
}
