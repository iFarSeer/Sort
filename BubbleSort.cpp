//
// Created by zhaosc  on 16/5/26.
//

#include "BubbleSort.h"


BubbleSort::BubbleSort() {
    name = "BubbleSort";
}

BubbleSort::~BubbleSort() {

}

void BubbleSort::sort(int array[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

char* BubbleSort::getName() const {
    return name;
}