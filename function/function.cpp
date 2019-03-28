//
// Created by Ocean on 27/03/2019.
//

#include<iostream>
#include<string>

using namespace std;

int m = 10;

int*p =&m;



void scope() {
        cout << m << endl;
    }

void const_overloading(int a) {
        cout << a << endl;
        m = 11;
        cout << m << endl;
        scope();
    }

int* return_pointer(){
    return p;
}


