#include <iostream>
#include <string>
using namespace std;

class SmartPark{
    private:
    int wheels;
    double weight;
    double price_per_hour;

    public:
    SmartPark(){
        if(wheels == 2){
            price_per_hour = 20;
        }
    }

    SmartPark(int w, double wt){
        wheels = w;
        weight = wt;
        if(wheels == 4){
            price_per_hour = 50;
            if(weight>=500){
                price_per_hour = 100;
            }
        }
    }

    double calculate(int hours){
        return price_per_hour*hours;
    }

};

int main()
{
    SmartPark s1(4,400);
    cout<<"the total price is "<<s1.calculate(10)<<"\n";
    return 0;
}