//
// Created by OceanicSix on 8/03/2019.
//

#ifndef UNTITLED_BOOK_H
#define UNTITLED_BOOK_H

struct book{
private:
    int book_no=0;
    double book_price;

public:
    //book(int no,double price);
    book();
    int get_no();
    virtual double get_price();
    static int m;
    int base=10;
};
#endif //UNTITLED_BOOK_H
