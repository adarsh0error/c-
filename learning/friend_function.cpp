#include<iostream>
using namespace std;

class box{
    protected:
    int length;

    public:
    box(){
        length = 10;
    }

    friend void getlength(box);
};

void getlength(box b){
    cout<<"the lenth is: "<<b.length<<endl;
}

int main(){
    box b;
    getlength(b);
    return 0;

}