//
// Created by ben on 4/8/24.
//


#include <iostream>
#include "Object.h"
#include <stdlib.h>
#include <string.h>

int main(){
    std::cout << "hello world\n";
    Object *obj1 = new Object(1, 2);
    Object *obj2 = new Object();

    std::cout << obj1->get_distance() << std::endl;
    std::cout << obj2->get_distance() << std::endl;

    char *byte = (char*)malloc(sizeof(char) * 10);
    strcpy(byte, "beny");
    printf("%s\n", byte);
    return 0;
}