//
// Created by OceanicSix on 16/03/2019.
//

#include<iostream>
#include <string>
using namespace std;


void oper(){
    string result;
    int grade;
    cin>>grade;
    result=(grade<60)?"fail":"pass";
    cout<<result;
}

void bit_wise(){
    unsigned char bits=233;
    cout<<(bits<<8);
}

void size_of(){
    cout<<sizeof (char);
}