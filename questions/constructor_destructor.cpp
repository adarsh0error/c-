#include <iostream>
using namespace std;
class Demo {
    public:
        Demo() {
            cout << "Constructor called" << endl;
        }
    
        ~Demo() {
            cout << "Destructor called" << endl;
        }
    };
    
    int main() {
        Demo d;  // Constructor called automatically
        return 0; // Destructor called automatically at end of scope
    }
    