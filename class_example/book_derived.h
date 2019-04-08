//
// Created by OceanicSix on 8/04/2019.
//
#include "book.h"

#ifndef UNTITLED_BOOK_DERIVED_H
#define UNTITLED_BOOK_DERIVED_H

class book_derived: public  book{
private:
    int new_1;

public:
    book_derived(int new1):book(),new_1(new1) {};
    int get_new1();

    double get_price() override;

};

#endif //UNTITLED_BOOK_DERIVED_H
