#include<iostream>
#include<string>
using namespace std;

class Triangle{
    float base, height;

    public:
    Triangle(){
        base = 10;
        height = 10;
    }

    Triangle(int val){
        base = val;
        height = val;
    }

    Triangle(int b, int h){
        base = b;
        height = h;
    }

    float calculateArea(){
        float area = 0.5*base*height;
        return area;
    }
};

int main(){
    Triangle t1;
    cout<<"the atea of the triangle(no parameter) is: "<<t1.calculateArea()<<endl;
    Triangle t2(15);
    cout<<"the atea of the triangle(no parameter) is: "<<t2.calculateArea()<<endl;
    Triangle t3(20,30);
    cout<<"the atea of the triangle(no parameter) is: "<<t3.calculateArea()<<endl;
}

