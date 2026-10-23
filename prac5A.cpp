#include <iostream>
using namespace std;

#define MAX 5
int q[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    q[++rear] = x;
    cout << "Element inserted\n";
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted: " << q[front++] << endl;
    if (front > rear) front = rear = -1;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
    cout << endl;
}

int main() {
    int ch, x;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n";
        cin >> ch;
        switch (ch) {
            case 1: cin >> x; enqueue(x); break;
            case 2: dequeue(); break;
            case 3: display(); break;
        }
    } while (ch != 4);
    return 0;
}
