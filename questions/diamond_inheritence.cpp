#include<iostream>
#include<string>
using namespace std;

class Herbivore{
    public:
    void type(){
        cout<<"herbivore animal"<<endl;
    }
};

class Cat:virtual public Herbivore{
    public:
    void meow(){
        cout<<"meowing"<<endl;
    }
};

class Cow:virtual public Herbivore{
    public:
    void moo(){
        cout<<"mooing"<<endl;
    }
};

class Animal:public Cow, public Cat{
    public:
    void animal(){
        cout<<"the animal is"<<endl;
    }
};

int main(){
    Animal a;
    a.animal();
    a.meow();
    a.type();
}
