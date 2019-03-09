//
// Created by Ocean on 9/03/2019.
//
#include<iostream>
#include <string>

using namespace std;


void str_cin() {
    string a, result;
    while (cin >> a) {
        result += a;
        cout << result << endl;
    }
    system("pause");
}

void int_cin() {
    int a, sum=0;
    while (cin >> a){
        sum+=a;
    }
    cout<<sum<<endl;
}