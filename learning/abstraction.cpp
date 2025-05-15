#include<iostream>
using namespace std;

class shape{
    public:
    virtual void draw() = 0;
};

class rectangle:public shape{
    public:
    void draw() override{
        cout<<"drawing a rectanglr"<<endl;
    }
};

class circle:public shape{
    public:
    void draw() override{
        cout<<"drawing a circle"<<endl;
    }
};

int main(){
    shape* s1 = new circle;
    shape* s2 = new rectangle;
    s1->draw();
    s2->draw();
}