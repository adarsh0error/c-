#include<iostream>
using namespace std;
#include<string>

class Student{
    public:
    string name;
    int marks;

    

    void getdetails(){
        cout<<"enter the name of the student: ";
        cin>>name;
        cout<<"enter the marks of the student: ";
        cin>>marks;
    }

};

class Result:public Student{
    public:
    void displayresrult(){
        if(marks>=40){
            cout<<name<<" has passed"<<endl;
        }
        else{
            cout<<name<<" has failed"<<endl;
        }
    }

    };

    int main(){
        Result r1;
        r1.getdetails();
        r1.displayresrult();
        return 0;
    }
