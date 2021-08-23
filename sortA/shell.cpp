//
// Created by adeljck on 8/23/21.
//

#include "sort.h"
#include <math.h>
#include <iostream>

int getGap(int d) {
    double temp = (double) d / 2.0;
    return (int) ceil(temp);
}

void ShellSort(int data[], int maxsize) {
    int d = maxsize / 2;
    while (d > 0) {
        for (int i = 0; i < d; ++i) {
            if (data[i] > data[i + d]) {
                int temp = data[i];
                data[i] = data[i + d];
                data[i + d] = temp;
            }
        }
        d = d / 2;
    }
}