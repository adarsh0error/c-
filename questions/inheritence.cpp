#include <iostream>
#include <string>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"eating\n";
    }
    void sleep(){
        cout<<"sleeping\n";
    }
};

class dog: public animal{
    public:
    void bark(){
        cout<<"barking\n";
    }
};

class cat: public dog{
    public:
    void meow(){
        cout<<"meowing\n";
    }
    ~cat(){
        cout<<"destructor called\n";
    }
};

int main(){
    dog d1;
    d1.eat();
    d1.bark();
    d1.sleep();

    cat c1;
    c1.eat();
    c1.bark();
    c1.meow();
    c1.sleep();
    return 0;
}
