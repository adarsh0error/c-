#include<iostream>
#include<string>
using namespace std;

class dog{
    public:
    void barking(){
        cout<<"barkimg"<<endl;
    }
};

class cat:public dog{
    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};

class Animal:public cat{
    public:
    void animal(){
    cout<<"an animal";
    }
};

int main(){
    Animal a;
    a.barking();
    a.meow();
    a.animal();
    return 0;
}