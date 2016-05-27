#include <iostream>

using namespace std;

#include "SelectSort.h"
#include "BubbleSort.h"

int main() {

    SortBase *sort = NULL;

    int arr1[] = {1, 5, 3, 7, 9, 2};
    sort = new BubbleSort();
    sort->print(arr1, 6);
    sort->sort(arr1, 6);
    sort->print(arr1, 6);

    int arr2[] = {1, 5, 3, 7, 9, 2};
    sort = new SelectSort();
    sort->print(arr2, 6);
    sort->sort(arr2, 6);
    sort->print(arr2, 6);

    return 0;
}