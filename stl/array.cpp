#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> arr = {1,2,3,4,5};
    cout<<"the size of the array is: "<<arr.size()<<endl;
    cout<<"the element at index 0: "<<arr.at(0)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    cout<<"elements: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}