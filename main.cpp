//
// Created by ben on 4/8/24.
//


#include <iostream>
#include "Object.h"

int main(){
    std::cout << "hello world\n";
    Object *obj1 = new Object(1, 2);
    Object *obj2 = new Object();

    std::cout << obj1->get_distance() << std::endl;
    std::cout << obj2->get_distance() << std::endl;

    return 0;
}