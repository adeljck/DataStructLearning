//
// Created by adeljck on 8/23/21.
//
#include "sort.h"

void BubbleSort(int data[], int maxsize) {
    for (int i = 0; i < maxsize; ++i) {
        for (int j = 1; j < maxsize - i; ++j) {
            if (data[j - 1] > data[j]) {
                int temp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = temp;
            }
        }
    }
}