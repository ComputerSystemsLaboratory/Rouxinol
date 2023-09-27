#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;

int n;
const int MAX = 2000000;

void maxHeapify(int *A,int i){
    int l = 2 * i, r = 2 * i + 1, largest;
    if(l <= n && A[l-1] > A[i-1]) largest = l;
    else largest = i;
    if(r <= n && A[r-1] > A[largest-1]) largest = r;
    if(largest != i){
        swap(A[i-1], A[largest-1]);
        maxHeapify(A, largest);
    }
}

void heapIncreaseKey(int *A, int i, int key){
    if(key < A[i-1]){
        cout << "Exception: the new key is smaller than the present key." << endl;
        return;
    }
    A[i-1] = key;
    while(i > 1 && A[i/2-1] < A[i-1]){
        swap(A[i/2-1], A[i-1]);
        i = i/2;
    }
}

void maxHeapInsert(int *A, int key){
    A[n++] = -1;
    heapIncreaseKey(A, n, key);
}

int heapExtractMax(int *A){
    if(n < 1){
        cout << "Exception: Heap Under Flow" << endl;
    } else {
        int max = A[0];
        A[0] = A[--n];
        maxHeapify(A, 1);
        return max;
    }
}

int main(){
    static int A[MAX];
    n = 0;
    char str[10];
    while(scanf("%s",str)){
        if(str[0] == 'e' && str[1] == 'n') break;
        else if(str[0] == 'i'){
            int a;
            cin >> a;
            maxHeapInsert(A, a);
        } else printf("%d\n",heapExtractMax(A));
    }
}