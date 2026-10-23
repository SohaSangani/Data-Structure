#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    int *p;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    p = a + n - 1;

    cout << "Array in reverse order: ";
    for (int i = 0; i < n; i++) {
        cout << *p << " ";
        p--;
    }

    return 0;
}
