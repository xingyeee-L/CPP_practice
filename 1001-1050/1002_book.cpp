#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book{
    string title;
    double price;
};

int main(){

    vector<Book> library;

    int n;

    cout<<"输入书的数量：";
    cin>> n;

    for (int i=0;i<n;i++){
        Book tempBook;
        cin>>tempBook.title>>tempBook.price;

        library.push_back(tempBook);
    }

    cout<<"----图书清单-----"<<endl;
    for(int i=0;i<library.size();i++){
        cout<< library[i].title<<"价格:"<<library[i].price<<endl;

    }

    return 0;
}