//
// Created by Ocean on 9/03/2019.
//

#include<iostream>
#include <vector>

using namespace std;

void Vect() {
    vector<int> a = {1, 2, 3};
    if (a.empty())
        cout << "a is empty" << endl;
    else
        for (auto i:a)
            if (i != 2)
                cout << "there is no 2" << endl;
            else
                cout << "there is 2";
}

void vect_while(){
    vector<int> a={1,2,3};
    auto beg=a.begin();
    while(beg!=a.end()&& *beg!=3)
        cout<<*beg++<<endl;
}