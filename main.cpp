#include <iostream>
#include <string>
using namespace std;
#include "book.h"
#include "cctype"

//Constructor

//int main() {
//    book book1;
//    std::cout << "The number of book is "<<book1.get_no() << std::endl;
//    std::cout << "The price of book is "<<book1.get_price() << std::endl;
////    book book2(20,40);
////    std::cout << "The number of book is "<<book2.get_no() << std::endl;
////    std::cout << "The price of book is "<<book2.get_price() << std::endl;
//    return 0;
//}


// string
//int main(){
////    int a,b;
////    cin>>a>>b;
////    cout<<a<<" "<<b;
////    system("pause");
////    string a;
////    while(getline(cin,a)) {
////        cout << a << endl;
////    }
////    system("pause");
//12
//
//}

int main(){
    string a="Hello!!!";
    int count=0;
    for (auto i:a){
        if(ispunct(i))
            count+=1;

    }
    cout<<count<<endl;
}