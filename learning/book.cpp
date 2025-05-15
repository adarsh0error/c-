/*Create a class Book with data members title, author, and price. Include a constructor to initialize them and a method to display book details.

*/
#include<iostream>
#include<String>
using namespace std;

class Book{
    string title;
    string author;
    double price;

    public:
    Book(string tit, string auth, double pri){
        title = tit;
        author = auth;
        price = pri;
    }

    void displayDetails(){
        cout<<"the name of the book is: "<<title<<endl;
        cout<<"the author of the book is: "<<author<<endl;
        cout<<"the price of the book is: "<<price<<endl;
    }
};

int main(){
    Book b1{"computer","adarsh", 1000 };
    b1.displayDetails();

}