#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v1 = {1,2,3,4,5};
    v1.push_back(10);
    v1.pop_back();
    v1.erase(v1.begin()+2);
    v1.insert(v1.begin()+1,10);

    v1.clear();
    cout<<"is empty? "<<v1.empty()<<endl;

    cout<<"elements: "<<endl;
    for(int x:v1){
        cout<<x<<" "<<endl;
    }
}