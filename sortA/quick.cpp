//
// Created by adeljck on 2021/8/23.
//
#include "sort.h"
#include <iostream>

void QuickSort(int data[], int low, int high) {
    int i = low, j = high;
    int temp;
    if (low < high) {
        temp = data[low];
        while (i < j) {
            while (j > i && data[j] >= temp)--j;
            if (i < j) {
                data[i] = data[j];
                ++i;
            }
            while (i < j && data[i] < temp)++i;
            if (i < j) {
                data[j] = data[i];
                --j;
            }
        }
        data[i] = temp;
        QuickSort(data, low, i - 1);
        QuickSort(data, i + 1, high);
    }
}