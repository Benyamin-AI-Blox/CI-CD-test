//
// Created by ben on 4/8/24.
//

#include "Object.h"


Object::Object(){

}

Object::Object(int prev, int next){
    this->previous = prev;
    this->next = next;
}

Object::~Object(){

}

int Object::get_previous(){
    return this->previous;
}

int Object::get_next(){
    return this->next;
}

int Object::get_distance(){
    return (this->next - this->previous);
}