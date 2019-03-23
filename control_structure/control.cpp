//
// Created by OceanicSix on 22/03/2019.
//

#include<iostream>
#include <string>

using namespace std;


void switch_test(){
    char a='a';
    switch(a){
        case 'a':
            cout<<"this is a"<<endl;

        case 'b':
            cout<<"this is b"<<endl;
        default:
            ;

    }
}

void go_to(){
    begin:
        int a;
        cin>>a;
        if(a<0){
            goto begin;
        }
}

