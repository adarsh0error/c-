#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    string carID;
    string model;
    double price;
    bool availbility_status;

    public:
    car(string ID, string m, double p){
        carID = ID;
        model = m;
        price = p;
        availbility_status = true;
    }

    void rentCar(){
        if(availbility_status){
            availbility_status = false;
            cout<<"rented successfully \n";
        }
        else{
            cout<<"not available";
        }
    }

    void returnCar(){
        if(!availbility_status){
            availbility_status = true;
            cout<<"returned successfully \n";

        }
        else{
            cout<<"was not rented \n";
        }
    }

    double calculateRent(int days){
        return price*days;
    }

    void display(){
        cout<<"car id = "<<carID<<" mode name = "<<model<<"daily rate = "<<price<<"availability status = "<<availbility_status<<"\n";
    }
};

int main(){
    car c1("a", "toyota", 300);
    car c2("b", "lund", 500);
    car c3("c", "lodaa", 600);


    c1.display();
    c1.rentCar();
    c1.display();
    c1.calculateRent(3);
    c1.display();
    c1.returnCar();
    c1.display();

}
