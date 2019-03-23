//
// Created by OceanicSix on 23/03/2019.
//
#include<iostream>
using namespace std;

void try_catch(){
    int a=1,b=1;
    try{
        if(a==b)
            throw runtime_error("a should not equal to b");
    }catch (overflow_error err) {
        cout<<err.what();

    }

}
