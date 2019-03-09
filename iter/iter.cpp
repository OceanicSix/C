//
// Created by Ocean on 9/03/2019.
//
#include<iostream>
#include <string>
using namespace std;


void iter_str(){
    string a="hello";
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i<<endl;
    }
}

