//
// Created by ben on 4/8/24.
//

#ifndef CI_CD_TEST_ITEM_H
#define CI_CD_TEST_ITEM_H

#include "Object.h"

class Item : public Object{
private:
    int front;
public:
    Item();
    ~Item();
    Item(int, int, int, double);
    int get_front_distance();
};


#endif //CI_CD_TEST_ITEM_H
