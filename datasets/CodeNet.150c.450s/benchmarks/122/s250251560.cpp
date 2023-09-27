#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

#define MAX 2000000

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

void maxHeapify(int *heap, int index, int heapIndex) {
    int l = left(index);
    int r = right(index);
    int largest;

    if (l <= heapIndex && heap[l] > heap[index]) {
        largest = l;
    } else {
        largest = index;
    }

    if (r <= heapIndex && heap[r] > heap[largest]) {
        largest = r;
    }

    if (index != largest) {
        swap(heap[largest], heap[index]);
        maxHeapify(heap, largest, heapIndex);
    }

}

void insert(int *heap, int key, int heapIndex) {
    heap[heapIndex] = key;
}

void keyDelete(int *heap, int heapIndex) {
    swap(heap[1], heap[heapIndex]);
    printf("%d\n",heap[heapIndex]);

}

void increaseKey(int *heap,int key,int  index){
    heap[index]=key;
    while(index>1&&heap[index/2]<heap[index]){
        swap(heap[index/2],heap[index]);
        index=index/2;
    }
}

int main() {

    string str;
    int heap[MAX];
    int heapIndex = 0;    //ヒープのキーの可変サイズ

    while(true) {
        cin >> str;
        if (str == "end") {
            break;
        } else if (str[0] == 'i') {
            int key;scanf("%d", &key);
            heapIndex++;
            increaseKey(heap,key,heapIndex);
        } else if (str[0] == 'e') {
            keyDelete(heap,heapIndex);
            heapIndex--;
            maxHeapify(heap,1,heapIndex);
        }
    }

    return 0;
}
