//
// Created by adeljck on 8/23/21.
//

#include "sort.h"

void insert(int data[], int maxsize) {
    int key = data[maxsize], i = maxsize;
    while (data[i - 1] > key) {
        data[i] = data[i - 1];
        i--;
        if (i == 0) {
            break;
        }
    }
    data[i] = key;
}

void InsertionSort(int data[], int maxsize) {
    for (int i = 1; i < maxsize; ++i) {
        insert(data, i);
    }
}