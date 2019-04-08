//
// Created by OceanicSix on 8/03/2019.
#include<iostream>
#include "book.h"
using namespace std;

int book::m=0;

book::book(){
    book_no=0;
    book_price=0.0;
}

//book::book(int no,double price){
//    book_no=no;
//    book_price=price;
//
//}

int book::get_no(){
    return book_no;
}

double book::get_price() {
    return book_price;
}



//

