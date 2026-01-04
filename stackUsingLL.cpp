#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int val) {
    Node* n = new Node;
    n->data = val;
    n->next = top;
    top = n;
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

void peek() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element: " << top->data << endl;
}

void display() {
    if (top == NULL) {
        cout << "Stack is empty" << endl;
        return;
    }
    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, val;

    while (1) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }
}
