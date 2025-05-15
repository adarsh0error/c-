#include<iostream>
using namespace std;

template<typename t, typename u>
auto multiply(t a, u b) -> decltype(a*b){
    return a*b;
}

int main(){
    cout<<multiply<int, double>(40, 50.6);
}