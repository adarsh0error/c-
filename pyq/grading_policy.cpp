#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students";
    cin>>n;

    int grade;
    cout<<"enter the grades of the students: "<<endl;
    for(int i =0; i<n; i++){
        cin>>grade;

        if(grade>=38){
            int nextmultipleoffive = ((grade/5)+1)*5;
            int difference = nextmultipleoffive-grade;
            if(difference<3){
                grade = nextmultipleoffive;
            }
        }
        cout<<"final grades are: "<<grade<<endl;
    }
    return 0;


}
