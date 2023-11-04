//선택 정렬
#include"header.h"

void selectionSort() {
    for (int i = 0; i < SIZE; i++) {
        int min = INF;
        int minIdx = 0;
        for (int j = i; j < SIZE; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[minIdx] = temp;
    }
}