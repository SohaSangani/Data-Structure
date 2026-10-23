#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    stack<int> s;

    cout << "Enter postfix expression: ";
    cin >> exp;

    for (char c : exp) {
        if (c >= '0' && c <= '9') {
            s.push(c - '0');
        }
        else {
            if (s.size() < 2) {
                cout << "Invalid expression\n";
                return 0;
            }

            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            switch (c) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/':
                    if (b == 0) {
                        cout << "Division by zero\n";
                        return 0;
                    }
                    s.push(a / b);
                    break;
                default:
                    cout << "Invalid operator\n";
                    return 0;
            }
        }
    }

    if (s.size() == 1)
        cout << "Result: " << s.top() << endl;
    else
        cout << "Invalid expression\n";

    return 0;
}
