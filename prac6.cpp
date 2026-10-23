#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeginning(int x) {
    Node* n = new Node{x, head};
    head = n;
}

void insertEnd(int x) {
    Node* n = new Node{x, NULL};
    if (!head) {
        head = n;
        return;
    }

    Node* t = head;
    while (t->next) t = t->next;
    t->next = n;
}

void insertAfter(int key, int x) {
    Node* t = head;
    while (t && t->data != key) t = t->next;

    if (!t) {
        cout << "Node not found\n";
        return;
    }

    t->next = new Node{x, t->next};
}

void deleteFirst() {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    Node* t = head;
    head = head->next;
    delete t;
}

void deleteLast() {
    if (!head) {
        cout << "List is empty\n";
        return;
    }

    if (!head->next) {
        delete head;
        head = NULL;
        return;
    }

    Node* t = head;
    while (t->next->next) t = t->next;

    delete t->next;
    t->next = NULL;
}

void deleteAfter(int key) {
    Node* t = head;
    while (t && t->data != key) t = t->next;

    if (!t || !t->next) {
        cout << "Node or next node not found\n";
        return;
    }

    Node* d = t->next;
    t->next = d->next;
    delete d;
}

void display() {
    Node* t = head;
    while (t) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "NULL\n";
}

int main() {
    int ch, x, key;

    do {
        cout << "\n1.Insert Beginning 2.Insert End 3.Insert After";
        cout << "\n4.Delete First 5.Delete Last 6.Delete After";
        cout << "\n7.Display 8.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: cin >> x; insertBeginning(x); break;
            case 2: cin >> x; insertEnd(x); break;
            case 3:
                cin >> key >> x;
                insertAfter(key, x);
                break;
            case 4: deleteFirst(); break;
            case 5: deleteLast(); break;
            case 6: cin >> key; deleteAfter(key); break;
            case 7: display(); break;
        }
    } while (ch != 8);

    return 0;
}
