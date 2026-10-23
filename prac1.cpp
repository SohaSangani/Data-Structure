#include <iostream>
using namespace std;

int main() {
    int a[100], n, ch, pos, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    do {
        cout << "\n1. Insert\n2. Delete\n3. Traverse";
        cout << "\n4. Search\n5. Exit\n";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter position and value: ";
                cin >> pos >> x;

                if (n == 100 || pos < 1 || pos > n + 1) {
                    cout << "Invalid position or array full\n";
                    break;
                }

                for (int i = n; i >= pos; i--)
                    a[i] = a[i - 1];

                a[pos - 1] = x;
                n++;
                cout << "Element inserted\n";
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;

                if (pos < 1 || pos > n) {
                    cout << "Invalid position\n";
                    break;
                }

                for (int i = pos - 1; i < n - 1; i++)
                    a[i] = a[i + 1];

                n--;
                cout << "Element deleted\n";
                break;

            case 3:
                cout << "Array elements: ";
                for (int i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << endl;
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> x;

                pos = -1;
                for (int i = 0; i < n; i++) {
                    if (a[i] == x) {
                        pos = i;
                        break;
                    }
                }

                if (pos == -1)
                    cout << "Element not found\n";
                else
                    cout << "Element found at position "
                         << pos + 1 << endl;
                break;

            case 5:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (ch != 5);

    return 0;
}
