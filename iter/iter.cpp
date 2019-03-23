//
// Created by Ocean on 9/03/2019.
//
#include<iostream>
#include <string>
#include <vector>
using namespace std;



void iter_str(){
    string a="hello";
    for(auto i=a.begin();i!=a.end();i++){
        *i='m';
        cout<<*i<<endl;
    }
}

void for_loop(){
    vector<int> v={0,1,2,3,4};
    for(auto beg=v.begin();beg!=v.end();++beg){
        *beg+=2;
    }
    for(auto r :v){
        cout<<r<<endl;
    }
}

