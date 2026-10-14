#include <iostream>

using namespace std;

int main() {
    int x,x1,x2,x3,x4,x5;
    cout << "Enter an integer value for x: ";
    cin >> x;
    cout << "Initial value of x = " << x << endl;
    
    x1=x2=x3=x4=x5=x;
    x1 += 5;
    cout << "After x += 5,  x = " << x1 << endl;
    x2 -= 2;
    cout << "After x -= 2,  x = " << x2 << endl;
    x3 *= 3; 
    cout << "After x *= 3,  x = " << x3 << endl;
    x4 /= 2; 
    cout << "After x /= 2,  x = " << x4 << endl;
    x5 %= 3;
    cout << "After x %= 3,  x = " << x5 << endl;

    return 0;
}
