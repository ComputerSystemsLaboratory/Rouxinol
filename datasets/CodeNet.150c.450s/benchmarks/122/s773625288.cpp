#include <iostream>
#include<stdio.h>
#define MAX 5000001
#define INFTY (1<<30)

using namespace std;
int n = 0, arr[MAX];

void swapNode(int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void maxHeapify(int i) {
    //if(i > n) return;
    int left = 2*i;
    int right = 2*i+1;
    int largest = i;
    if(left <= n && right <= n) {
       int larger = arr[left] > arr[right] ? left : right;
       largest = arr[largest] > arr[larger] ? largest : larger;
    }else if(left <= n) {
        largest = arr[largest] > arr[left] ? largest : left;
    }else if(right <= n) {
        largest = arr[largest] > arr[right] ? largest : right;
    }
    if(largest != i) {
        swapNode(i, largest);
        maxHeapify(largest);
    }
}

void insertNode(int key) {
    arr[++n] = key;
    int i = n;
    while(i > 1 && arr[i/2] < arr[i]) {
        swapNode(i, i/2);
        i = i/2;
    }
}

int extract() {
    if(n < 1) return -INFTY;
    int res = arr[1];
    arr[1] = arr[n--];
    maxHeapify(1);
    return res;
}

int main()
{
    char com[10];
    int key;
    while(1) {
        scanf("%s", com);
        if(com[0] == 'e' && com[1] == 'n') break;
        else if(com[0] == 'i') {
            scanf("%d", &key);
            insertNode(key);

        }else {
            printf("%d\n", extract());
        }
    }
    return 0;
}