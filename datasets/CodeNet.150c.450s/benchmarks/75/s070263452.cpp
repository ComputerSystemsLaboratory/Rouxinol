#include <iostream>
#include<stdio.h>
#define MAX 500001

using namespace std;
int n, arr[MAX];

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

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = n/2; i >= 1; i--) {
        maxHeapify(i);
    }

    for(int i = 1; i <= n; i++) {
        printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}