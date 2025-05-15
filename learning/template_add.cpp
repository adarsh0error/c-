#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    return(a+b);

}

int main(){
    cout<<add<int>(78, 89)<<endl;
    cout<<add<double>(8.0,5.6)<<endl;

}