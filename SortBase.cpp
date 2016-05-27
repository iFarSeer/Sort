//
// Created by zhaosc  on 16/5/26.
//

#include "SortBase.h"

void SortBase::print(int *array, int len) const {

    cout << "===" << name << "===" << endl;
    for (int i = 0; i < len; ++i) {
        cout << array[i] << "  ";
    }
    cout << "" << endl;
}