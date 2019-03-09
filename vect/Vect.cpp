//
// Created by Ocean on 9/03/2019.
//

#include<iostream>
#include <vector>
using namespace std;

void Vect(){
    vector<int> a={1,2,3};
    if (a.empty())
        cout<<"a is empty"<<endl;
    else
        for(auto i:a)
            cout<<i<<endl;
}