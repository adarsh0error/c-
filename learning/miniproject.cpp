#include<iostream>
#include<String>
using namespace std;

class Project{
    string customer_name;
    int total_money;
    int expenditure;
    int money_given;
    int number_of_people;

    public:
    Project(string name, int money, int exp, int given, int people){
        customer_name = name;
        total_money = money;
        expenditure = exp;
        money_given = given;
        number_of_people = people;
    }

    int remaining_to_give(){
        int remaining = total_money-money_given;
        return remaining;
    }

    int profit(){
        int profit = total_money - expenditure;
    }

    int distribution(){
        int personal_profit = profit()/number_of_people;
        return personal_profit;
    }

    

    void displaydetails(){
        cout<<"the name of the customer is: "<<customer_name<<endl;
        cout<<"total money is: "<<total_money<<endl;
        cout<<"he has given: "<<money_given<<endl;
        cout<<"remaining to give: "<<remaining_to_give()<<endl;
        cout<<"the total profit is: "<<profit()<<endl;
        cout<<"you will earn: "<<distribution()<<endl;
    }
};

int main(){
    Project kriss{"kriss", 1200, 200, 0, 2};
    kriss.displaydetails();

    Project Pranav{"Pranav", 500, 0, 0, 1};
    Pranav.displaydetails();

    Project Aditya{"Aditya", 1000, 0, 300, 1};
    Aditya.displaydetails();
    
    return 0;
}