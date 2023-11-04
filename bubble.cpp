//버블 정렬
#include"header.h"

void bubbleSort() {
    bool flag = false;
    for (int i = 0; i < SIZE; i++) {
        flag = false;
        for (int j = 0; j < SIZE - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag) {
            return;
        }
    }
}