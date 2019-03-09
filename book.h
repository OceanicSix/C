//
// Created by OceanicSix on 8/03/2019.
//

#ifndef UNTITLED_BOOK_H
#define UNTITLED_BOOK_H

struct book{
private:
    int book_no;
    double book_price;
public:
    //book(int no,double price);
    book();
    int get_no();
    double get_price();
};
#endif //UNTITLED_BOOK_H
