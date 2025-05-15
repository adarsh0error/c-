/*Write a class Rectangle with private members length and width, and public methods to set values, calculate area, and display dimensions.*/
#include<iostream>
#include<String>
using namespace std;

class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(double len, double wid){
        length = len;
        width = wid;
    }

    double Area(){
        double area = length*width;
        return area;
    }

    void displaydetails(){
        cout<<"length: "<<length<<endl;
        cout<<"width: "<<width<<endl;
        cout<<"area: "<<Area()<<endl;
    }

    
};
int main(){
    Rectangle r1{10.99, 5.21};
    r1.displaydetails();
    Rectangle r2{20.5, 10.0};
    r2.displaydetails();
    return 0;

}