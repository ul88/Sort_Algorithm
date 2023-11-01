#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#define SIZE 10000
#define INF INT32_MAX
using namespace std;
int arr[SIZE + 1] = { 0, };
int arr2[SIZE + 1] = { 0, };
int copyArr[SIZE + 1] = { 0, };
void randomData() {
    // bool flag[SIZE+1]={0,};
    // for(int i=0;i<SIZE;i++){
    //     int randNum = rand()%SIZE+1;
    //     if(flag[randNum]){
    //         i--;
    //         continue;
    //     }else{
    //         flag[randNum]=1;
    //         copyArr[i]=randNum;
    //     }
    // }
    for (int i = 0; i < SIZE; i++) {
        copyArr[i] = rand();
    }
}

void copyData() {
    for (int i = 0; i < SIZE; i++) {
        arr[i] = copyArr[i];
    }
}

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

void inserationSort() {
    for (int i = 1; i < SIZE; i++) {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void merge(int left, int right)
{
    
    int mid = (left + right) / 2;

    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            arr2[k++] = arr[i++];
        else
            arr2[k++] = arr[j++];
    }

    int tmp = i > mid ? j : i;

    while (k <= right) arr2[k++] = arr[tmp++];

    for (int i = left; i <= right; i++) arr[i] = arr2[i];
}

void heapSort() {

}

void mergeSort(int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid + 1, right);
        merge(left, right);
    }
}

void quickSort(int start, int end) {
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
    srand(time(NULL));
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