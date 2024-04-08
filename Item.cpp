//
// Created by ben on 4/8/24.
//

#include "Item.h"

Item::Item(){

}

Item::Item(int previous, int next, double middle, int front, int beginning): Object(previous, next){
    this->middle = middle;
    this->front = front;
    this->very_beginning = beginning;
}

Item::~Item(){

}

int Item::get_front(){
    return this->front;
}

int Item::get_front_distance(){
    return (this->front - this->very_beginning);
}

double Item::get_middle(){
    return this->middle;
}