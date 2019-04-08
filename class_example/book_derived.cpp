//
// Created by OceanicSix on 8/04/2019.
//
#include "book_derived.h"
#include<iostream>
#include<string>
using namespace std;

//book_derived::book_derived(int new1):book(),new_1(new1) {};
//int book_derived::m=10;
int book_derived::get_new1() {
     cout<<get_price()<<endl;
    return new_1;

}

double book_derived::get_price() {
    return 100;
}

