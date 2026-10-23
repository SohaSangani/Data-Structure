#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << "Inside call by value: " << x << endl;
}

void callByReference(int &x) {
    x = x + 10;
    cout << "Inside call by reference: " << x << endl;
}

int main() {
    int a = 5, b = 5;

    cout << "Original value of a: " << a << endl;
    callByValue(a);
    cout << "After call by value: " << a << endl;

    cout << "\nOriginal value of b: " << b << endl;
    callByReference(b);
    cout << "After call by reference: " << b << endl;

    return 0;
}
