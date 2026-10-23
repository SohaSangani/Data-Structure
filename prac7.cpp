#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* tail = NULL;

void insertBeginning(int x) {
    Node* n = new Node{x, NULL};

    if (!tail) {
        tail = n;
        n->next = n;
    } else {
        n->next = tail->next;
        tail->next = n;
    }
}

void insertEnd(int x) {
    insertBeginning(x);
    tail = tail->next;
}

void insertAfter(int key, int x) {
    if (!tail) {
        cout << "List is empty\n";
        return;
    }

    Node* t = tail->next;
    do {
        if (t->data == key) {
            Node* n = new Node{x, t->next};
            t->next = n;
            if (t == tail) tail = n;
            return;
        }
        t = t->next;
    } while (t != tail->next);

    cout << "Node not found\n";
}

void deleteFirst() {
    if (!tail) {
        cout << "List is empty\n";
        return;
    }

    Node* first = tail->next;
    if (first == tail) tail = NULL;
    else tail->next = first->next;

    delete first;
}

void deleteLast() {
    if (!tail) {
        cout << "List is empty\n";
        return;
    }

    Node* first = tail->next;
    if (first == tail) {
        delete tail;
        tail = NULL;
        return;
    }

    Node* t = first;
    while (t->next != tail) t = t->next;

    t->next = tail->next;
    delete tail;
    tail = t;
}

void deleteAfter(int key) {
    if (!tail) {
        cout << "List is empty\n";
        return;
    }

    Node* t = tail->next;
    do {
        if (t->data == key) {
            Node* d = t->next;

            if (d == t) {
                delete d;
                tail = NULL;
            } else {
                t->next = d->next;
                if (d == tail) tail = t;
                delete d;
            }
            return;
        }
        t = t->next;
    } while (t != tail->next);

    cout << "Node or next node not found\n";
}

void display() {
    if (!tail) {
        cout << "List is empty\n";
        return;
    }

    Node* t = tail->next;
    do {
        cout << t->data << " -> ";
        t = t->next;
    } while (t != tail->next);

    cout << "(back to head)\n";
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
            case 3: cin >> key >> x; insertAfter(key, x); break;
            case 4: deleteFirst(); break;
            case 5: deleteLast(); break;
            case 6: cin >> key; deleteAfter(key); break;
            case 7: display(); break;
        }
    } while (ch != 8);

    return 0;
}
