#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() { top = -1; }

    void push(int val) {
        if (top >= 99) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = val;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) return -1;
        return arr[top];
    }

    bool isEmpty() { return top < 0; }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    cout << "Top element: " << s.peek() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "After pop: ";
    s.display();

    return 0;
}
