# Sort_Algorithm
정렬 알고리즘 정리 & 시간 비교
### 정렬의 시간을 비교하기 위해 N개의 데이터를 랜덤으로 배열에 값을 넣고 비교를 함
### 정렬 데이터의 개수는 #define SIZE를 수정하면 된다.

## 버블 정렬 (Bubble Sort)
### 인접한 두 데이터를 서로 바꾸는 정렬 방법
#### 구현 난이도가 가장 낮다.

![버블 정렬](https://blog.kakaocdn.net/dn/8YcCV/btrn16iCibD/RkaTvry4qETDJVWepFtkp0/img.gif)  
출처 : https://blog.kakaocdn.net/dn/8YcCV/btrn16iCibD/RkaTvry4qETDJVWepFtkp0/img.gif

### 항상 O(N^2)의 시간 복잡도를 가진다.

## 선택 정렬 (Selection Sort)
### 기준보다 작은 수 중 가장 작은 수와 교환하는 정렬 방법

![선택 정렬](https://miro.medium.com/v2/resize:fit:1000/0*kKyEiHXYzs9aVcJR.gif)  
출처 : https://miro.medium.com/v2/resize:fit:1000/0*kKyEiHXYzs9aVcJR.gif

### 항상 O(N^2)의 시간 복잡도를 가진다.

## 삽입 정렬 (Inseration Sort)
### 현재 위치를 i라고 할 때 i를 기준으로 왼쪽을 탐색하며 data[i]보다 작은게 나올 때까지 반복하는 정렬 방법 반복하며 지나간 데이터들은 i가 있는 방향으로 한칸씩 민다.

![삽입 정렬](https://blog.kakaocdn.net/dn/bO553N/btrrJtPhIKz/DvpIhmIepEMtuAQhbp1LO0/img.gif)  
출처 : https://blog.kakaocdn.net/dn/bO553N/btrrJtPhIKz/DvpIhmIepEMtuAQhbp1LO0/img.gif

### 최선의 경우 O(N)의 시간 복잡도를, 최악의 경우 O(N^2)의 시간 복잡도를 가진다.

## 병합 정렬 (Merge Sort)
### 가장 작은 단위의 데이터가 될 때까지 1/2씩 분할한 후 합치면서 정렬하는 정렬 방법

![병합 정렬](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)  
출처 : https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif

### 분할하는 과정에서 logN만큼의 시간이 걸리므로 총 NlogN만큼의 시간이 걸린다.
### 즉, 항상 O(NlogN)의 시간 복잡도를 가진다.
#### 데이터가 배열로 구성된 경우 임시 배열을 필요로 하므로 추가 공간이 필요한 정렬 방법이다.

## 힙 정렬 (Heap Sort)
### 힙 자료 구조를 이용한 정렬 방법이다.

### 힙 구조를 만드는 과정에서 logN만큼의 시간이 걸리므로 총 NlogN만큼의 시간이 걸린다.
### 즉, 항상 O(NlogN)의 시간 복잡도를 가진다.

## 퀵 정렬 (Quick Sort)
### pivot을 기준으로 data[pivot]보다 처음으로 큰 값을 i, data[pivot]보다 처음으로 작은 값을 j라고 뒀을 때
### i>j 일때는 data[pivot]과 data[j]를 교환(바뀐 j를 기준으로 좌측은 항상 data[j]보다 작다.)하고
### i<=j 일때는 data[i]와 data[j]를 교환한다.

![퀵 정렬](https://velog.velcdn.com/images/sisofiy626/post/345ce5f7-2f3e-459f-a3ae-bbe917db3671/image.gif)  
출처 : https://velog.velcdn.com/images/sisofiy626/post/345ce5f7-2f3e-459f-a3ae-bbe917db3671/image.gif

### 기준값에 의한 분할 과정에서 logN만큼의 시간이 걸리므로 총 NlogN만큼의 시간이 걸린다.
### 평균적으로는 O(NlogN)의 시간 복잡도를 가지지만, 최악의 경우 O(N^2)의 시간 복잡도를 가진다.


