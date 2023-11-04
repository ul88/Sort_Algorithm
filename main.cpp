#include"header.h"
#include<iostream>
#include<ctime>
#include<algorithm>

using namespace std;

int arr[SIZE + 1] = { 0, };
int arr2[SIZE + 1] = { 0, };
int copyArr[SIZE + 1] = { 0, };

void randomData();

void copyData();

void bubbleSort();

void selectionSort();

void inserationSort();

void merge(int left, int right);

void mergeSort(int left, int right);

void heapSort();


void quickSort(int start, int end);

void print() {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    srand((unsigned int)time(NULL));
    clock_t start, finish;
    double duration;

    randomData();

    //버블정렬
    copyData();

    start = clock();

    bubbleSort();

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "bubble sort: " << duration << "s" << "\n";

    //선택정렬
    copyData();

    start = clock();

    selectionSort();

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "selection sort: " << duration << "s" << "\n";

    //삽입정렬
    copyData();

    start = clock();

    inserationSort();

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "inseration sort: " << duration << "s" << "\n";


    //병합정렬
    copyData();

    start = clock();

    mergeSort(0, SIZE - 1);

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "merge sort: " << duration << "s" << "\n";

    //힙정렬

    copyData();

    start = clock();

    heapSort();

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "heap sort: " << duration << "s" << "\n";


    //퀵정렬
    copyData();

    start = clock();

    quickSort(0, SIZE - 1);

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "quick sort: " << duration << "s" << "\n";

    copyData();

    start = clock();

    sort(arr, arr + SIZE - 1);

    finish = clock();

    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "sort: " << duration << "s" << "\n";


    return 0;
}