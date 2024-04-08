//
// Created by ben on 4/8/24.
//

#ifndef CI_CD_TEST_ITEM_H
#define CI_CD_TEST_ITEM_H


#include "Object.h"

class Item : public Object{
private:
    int front;
    int very_beginning;
public:
    Item();
    ~Item();
    Item(int, int, double, int, int);
    int get_front();
    int get_front_distance();
    double get_middle();
};


#endif //CI_CD_TEST_ITEM_H
