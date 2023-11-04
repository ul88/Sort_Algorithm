#include"header.h"
#include<cstdlib>

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