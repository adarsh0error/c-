#include<iostream>
#include<string>
using namespace std;

class Worker{
    string WorkerNmae;
    int workerID;
    int noOFHoursWorked;
    int payRtae;
    int DOJ;


    public:
    Worker(string wn, int wid, int nof, int pr, int dj){
        WorkerNmae = wn;
        workerID = wid;
        noOFHoursWorked = nof;
        payRtae = pr;
        DOJ = dj;
    }

    int calculateSalary(){
        int salary = payRtae*noOFHoursWorked;
    }

    void displayDetails(){
        cout<<"the name of the worler is: "<<WorkerNmae<<endl;
        cout<<"the worker id is: "<<workerID<<endl;
        cout<<"the time worked: "<<noOFHoursWorked<<endl;
        cout<<"their pay-rate is: "<<payRtae<<endl;
        cout<<"the total salary earned is: "<<calculateSalary()<<endl;
        cout<<"their dat of joining: "<<DOJ<<endl;
    }

};

int main(){
    Worker w1("adarsh", 123, 452, 40, 25);
    w1.displayDetails();
}