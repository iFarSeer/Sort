//
// Created by zhaosc  on 16/5/26.
//

#ifndef SORT_BUBBLESORT_H
#define SORT_BUBBLESORT_H


#include "SortBase.h"

class BubbleSort : public SortBase {

public:

    BubbleSort();

    ~BubbleSort();

    virtual void sort(int array[], int len);

    virtual char *getName() const;
};



#endif //SORT_BUBBLESORT_H
