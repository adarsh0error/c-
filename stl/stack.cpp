#include <iostream>
#include <stack>
using namespace std;

// Helper function to print contents of a stack
void printStack(stack<int> s) {
    cout << "Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    cout << "Pushing 10...\n";
    s.push(10);
    printStack(s);

    cout << "Pushing 20...\n";
    s.push(20);
    printStack(s);

    cout << "Pushing 30...\n";
    s.push(30);
    printStack(s);

    cout << "Top element: " << s.top() << endl;

    cout << "Popping top element...\n";
    s.pop();
    printStack(s);

    cout << "Current top: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
