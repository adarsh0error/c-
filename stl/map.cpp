#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m.insert({3, "Cherry"});

    cout << "Map contents:\n";
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }

    m.erase(2);  // Remove key 2

    cout << "Find key 1: " << m.count(2) << endl;

    return 0;
}
