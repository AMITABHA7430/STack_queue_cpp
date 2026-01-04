#include <iostream>
using namespace std;

#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = val;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Deleted: " << queue[front] << endl;
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, val;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                enqueue(val);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }
}
