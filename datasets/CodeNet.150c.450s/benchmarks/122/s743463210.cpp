#include <stdio.h>

int A[2000010];
int n;

void maxheapify(int i) {
    if (i > n) {
        return;
    }
    int left = i * 2, right = i * 2 + 1, largest = i;
    if (left <= n && A[left] > A[largest]) {
        largest = left;
    }
    if (right <= n && A[right] > A[largest]) {
        largest = right;
    }
    if (largest != i) {
        int t = A[i];
        A[i] = A[largest];
        A[largest] = t;
        maxheapify(largest);
    }
}

void buildHeap() {
    for (int i = n / 2; i >= 1; i--) {
        maxheapify(i);
    }
}

void buildHeap2() {
    for (int i = 2; i <= n; i++) {
        int j = i;
        while (j > 1 && A[j / 2] < A[j]) {
            int t = A[j / 2];
            A[j / 2] = A[j];
            A[j] = t;
            j /= 2;
        }
    }
}

void insert(int x) {
    n++;
    A[n] = x;
    int j = n;
    while (j > 1 && A[j / 2] < A[j]) {
        int t = A[j / 2];
        A[j / 2] = A[j];
        A[j] = t;
        j /= 2;
    }
}

int getMaxVal() {
    int val = A[1];
    A[1]=A[n];
    n--;
    maxheapify(1);
    return val;
}

int main() {
    char cmd[100];
    int x;
    while(1) {
        scanf("%s %d", cmd, &x);
        if (cmd[2]=='d'){
            break;
        }else if(cmd[0] =='i'){
            insert(x);
        }else{
            printf("%d\n",getMaxVal());
        }
    }
    return 0;
}

