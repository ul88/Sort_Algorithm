//Äü Á¤·Ä
#include"header.h"

void quickSort(int start, int end){
    if (start >= end) {
        return;
    }
    int pivot = start;
    int i = pivot + 1;
    int j = end;

    while (i <= j) {
        while (i <= end && arr[i] <= arr[pivot]) {
            i++;
        }
        while (j > start && arr[j] >= arr[pivot]) {
            j--;
        }

        if (i > j) {
            int tmp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = tmp;
        }
        else {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    quickSort(start, j - 1);
    quickSort(j + 1, end);
}