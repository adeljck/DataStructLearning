#include <iostream>
#include <stdio.h>
#include "sortA/sort.h"

using namespace std;

int main() {
    int maxsize = 9;
    int data[9] = {0, 4, 5, 2, 7, 9, 8, 10, 6};
    ShellSort(data, maxsize);
    for (int i = 0; i < maxsize; ++i) {
        cout << data[i] << ",";
    }
    return 0;
}

