// Implement a program to demonstrate constructor overloading using a Student class.

#include<iostream>
#include<String>
using namespace std;

class Student{
    private:
    string name;
    string id;
    string grade;

    public:
    Student(){
        name = "kuch bhi";
        id = "404notfound";
        grade = "fail";
    }

    Student(string student_name, string roll){
        name = student_name;
        id = roll;
        grade = "not assigned";
    }

    Student(string r, char g){
        id = r;
        grade = g;
        name = "no name";
    }

    Student(string na, string ro, string gra){
        name = na;
        id = ro;
        grade = gra;

    }

    void display(){
        cout<<"the name of the student is: "<<name<<endl;
        cout<<"the roll of the student is: "<<id<<endl;
        cout<<"the grade of the student is: "<<grade<<endl;
    }
};

int main(){
    Student s1;
    s1.display();

    Student s2{"adarsh", "123"};
    s2.display();

    Student s3{"456", 'A'};
    s3.display();

    Student s4{"mittal", "789", "B+"};
    s4.display();

    return 0;
}