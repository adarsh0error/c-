#include<iostream>
using namespace std;

template<typename t>
class myclass{
    private:
    t data;

    public:
    myclass(t val):data(val){}
    t getdata(){
        return data;
    }
};

int main(){
    myclass<int>obj1(10);
    myclass<double>obj2(56.3);
    cout<<obj1.getdata()<<endl;
    cout<<obj2.getdata()<<endl;
}