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
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3]={10,11,12};


//

//    for(auto i=a;i!=end(a);i++){
//        for(auto k=*i;k!=end(*i);k++){
//            cout<<*k<<endl;
//        }
//    }


    for(auto row:a){
        cout<<*row<<endl;
    }

    for (auto i:b){
        cout<<i<<endl;
    }
}