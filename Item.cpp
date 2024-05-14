//
// Created by ben on 4/8/24.
//

#include "Item.h"

Item::Item(){

}

Item::~Item(){

}

Item::Item(int prev, int next, int front, double middle):Object(prev, next){
    this->middle = middle;
    this->front = front;
}
int Item::get_front_distance(){
    // This is the check to see how git detects this
    return (this->front - (int)this->middle);
}
