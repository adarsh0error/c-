#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front: " << q.front() << ", Back: " << q.back() << endl;

    q.pop();

    cout << "After pop, Front: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;
    cout << "Is empty: " << q.empty() << endl;

    return 0;
}
