//
// Created by ben on 4/8/24.
//


#include <iostream>
#include "Object.h"
#include "Item.h"
#include <stdlib.h>
#include <string.h>

int main(){
    std::cout << "hello world\n";
    Object *obj1 = new Object(1, 2);
    Object *obj2 = new Object();

    std::cout << obj1->get_distance() << std::endl;
    std::cout << obj2->get_distance() << std::endl;

    delete obj1;
    delete obj2;

    char *byte = (char*)malloc(sizeof(char) * 10);
    strcpy(byte, "beny");
    printf("%s\n", byte);

    delete byte;

    Item *new_item = Item(1, 2, 3.6, 6, 9);
    std::cout << new_item->get_middle() << std::endl;
    std::cout << new_item->get_front_distance() << std::endl;

    return 0;
}