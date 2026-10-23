#include <iostream>
using namespace std;

#define MAX 5
int st[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        cout << "Stack Overflow\n";
    else {
        st[++top] = x;
        cout << "Element pushed\n";
    }
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << "Popped: " << st[top--] << endl;
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top element: " << st[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";
    cout << endl;
}

int main() {
    int ch, x;
    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\n";
        cin >> ch;
        switch (ch) {
            case 1: cin >> x; push(x); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
        }
    } while (ch != 5);
    return 0;
}
