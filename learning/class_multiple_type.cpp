#include<iostream>
using namespace std;

template<class T>
class myclass{
    private:
    T val1, val2;

    public:
    myclass(T a, T b):val1(a), val2(b){}

    void show(){
        cout<<"the numbers entered are: "<<val1<<"and "<<val2<<endl; 
    }

    template<typename u>
    void add(){
        cout<<"the sum is: "<<static_cast<u>(val1+val2)<<endl;
    }
    template<typename u>
    void multiply(){
        cout<<"the product is: "<<static_cast<u>(val1*val2)<<endl; 
    }
};

int main(){
    myclass<int>obj1(5,10);
    myclass<double>obj2(41.3,25.9);
    obj1.show();
    obj2.show();
    obj1.add<double>();
    obj2.multiply<int>();
}