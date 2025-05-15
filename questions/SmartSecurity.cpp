#include <iostream>
#include<string>
using namespace std;

class SmartSecurity{
    private:
    bool doorStatus;
    bool windowStatus;

    public:
    SmartSecurity(bool ds, bool ws){
        doorStatus = ds;
        windowStatus = ws;
        doorStatus = true;
        windowStatus = true;
    }

    void lockAll(){
        doorStatus = true;
        windowStatus = true;
    }

    void unlockAll(){
        doorStatus = false;
        windowStatus = false;

    }

    void display(){
        doorStatus?(cout<<"locked \n"):(cout<<"unlocked \n");
    }

};

int main()
{
    SmartSecurity s1(true, true);
    s1.display();
    s1.lockAll();
    s1.display();
    s1.unlockAll();
    s1.display();
    return 0;
}