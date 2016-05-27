//
// Created by zhaosc  on 16/5/26.
//

#ifndef SORT_SORTBASE_H
#define SORT_SORTBASE_H

#include <iostream>
using namespace std;

class SortBase {

public:

    virtual void sort(int array[], int len) = 0;

    virtual char *getName() const = 0;

    void print(int *array, int len) const;

    char *name;
};


#endif //SORT_SORTBASE_H
