//
// Created by zhaosc  on 16/5/26.
//

#include "SelectSort.h"


SelectSort::SelectSort() {
    name = "SelectSort";
}

SelectSort::~SelectSort() {

}

void SelectSort::sort(int array[], int len) {
    int minIndex = 0;
    for (int i = 0; i < len - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < len; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int tmp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = tmp;
        }
    }
}

char* SelectSort::getName() const {
    return name;
}