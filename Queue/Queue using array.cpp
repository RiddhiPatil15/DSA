#include <bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int cap, front, rear, count;

public:
    Queue(int size) {
        cap = size;
        arr = new int[cap];
        front = rear = 0;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool empty() {
        return count == 0;
    }

    bool full() {
        return count == cap;
    }

    void push(int x) {
        if (full()) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear] = x;
        rear = (rear + 1) % cap;
        count++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % cap;
        count--;
    }

    int getFront() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % cap] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();

    q.pop();
    cout << q.getFront() << endl;

    q.push(6);
    q.display();

    return 0;
}
