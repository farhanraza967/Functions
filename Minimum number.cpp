#include <iostream>
using namespace std;
int minimum(int a, int b, int c){
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}
int main(){
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    int minNum = minimum(x, y, z);
    cout << "The smallest number is: " << minNum << endl;
    return 0;
}
