//
// Created by ben on 4/8/24.
//

#ifndef CI_CD_TEST_OBJECT_H
#define CI_CD_TEST_OBJECT_H


class Object {
private:
    int previous;
    int next;
public:
    Object();
    Object(int, int);
    ~Object();
    int get_previous();
    int get_next();
    int get_distance();
};


#endif //CI_CD_TEST_OBJECT_H
