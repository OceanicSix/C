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