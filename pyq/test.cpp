#include<iostream>
#include<iostream>
using namespace std;

class B{
    public:
    B(){
        cout<<"hello";
    }
    ~B(){
        cout<<"destructor 1";
    }
};

class D:public B{
    public:
    D(){
        cout<<"c++";
    }
    ~D(){
        cout<<"destructor 2";
    }
};

int main(){
    D o;
    return 0;
}