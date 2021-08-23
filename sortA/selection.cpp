//
// Created by adeljck on 8/23/21.
//
#include "sort.h"


int GetMax(int data[], int End) {
    int max = 0;
    for (int i = 1; i < End; ++i) {
        if (data[i] > data[max]) {
            max = i;
        }
    }
    return max;
}

void SelectionSort(int data[], int maxsize) {
    int MaxIndex, temp;
    for (int i = 0; i < maxsize; ++i) {
        MaxIndex = GetMax(data, maxsize - i);
        temp = data[maxsize - 1 - i];
        data[maxsize - 1 - i] = data[MaxIndex];
        data[MaxIndex] = temp;
    }
}