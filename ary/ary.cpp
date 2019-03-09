//
// Created by Ocean on 9/03/2019.
//
#include<iostream>
#include<string>

using namespace std;

void ary() {

    int arr[3] = {1, 2, 3};
    int a = *(arr + 1);
    cout << a;
}

void multi_ary() {
    int a[3][3];
    int b[3]={1,2,3};


    for (int i = 0; i != 3; i++) {
        for (int j = 0; j != 3; j++)
            a[i][j] = 1;
    }

//    for(auto i=a;i!=end(a);i++){
//        for(auto k=*i;k!=end(*i);k++){
//            cout<<*k<<endl;
//        }
//    }


    for(auto row:a){
        for(auto col:*row)
            cout<<col<<endl;
    }

//    for (auto i:b){
//        cout<<i<<endl;
//    }
}