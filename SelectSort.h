//
// Created by zhaosc  on 16/5/26.
//

#ifndef SORT_SELECTSORT_H
#define SORT_SELECTSORT_H

#include "SortBase.h"

class SelectSort : public SortBase {

public:

    SelectSort();

    ~SelectSort();

    virtual void sort(int array[], int len);

    virtual char *getName() const;
};


#endif //SORT_SELECTSORT_H
