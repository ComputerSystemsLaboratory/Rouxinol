#include <iostream>

using namespace std;
#define MAX 2000000
#define INFINITY (1<<30)

int gHeap[MAX + 1],gSize;

void maxHeapify(int i){
    int left,right,largest;
    left = 2 * i;
    right = 2 * i + 1;
    
    // 左の子、自分、右の子で値が最大のノードを選択
    if(left <= gSize && gHeap[left] > gHeap[i]){
        largest = left;
    }
    else{
        largest = i;
    }
    // 右の子と比較
    if(right <= gSize && gHeap[right] > gHeap[largest]) largest = right;
    
    if(largest != i){
        swap(gHeap[i],gHeap[largest]);
        maxHeapify(largest);
    }
}

int extract(){
    int maxv;
    if(gSize < 1) return -INFINITY;
    maxv = gHeap[1];
    gHeap[1] = gHeap[gSize--];
    maxHeapify(1);
    return maxv;
}

void increaseKey(int i ,int key){
    if(key < gHeap[i])return;
    gHeap[i] = key;
    while(i > 1 && gHeap[i / 2] < gHeap[i]){
        swap(gHeap[i],gHeap[i / 2]);
        i = i / 2;
    }
}

void insert(int key){
    gSize++;
    gHeap[gSize] = -INFINITY;
    increaseKey(gSize, key);
}

int main(){
    int key;
    char com[10];
    
    while(1){
        cin >> com;
        if(com[0] == 'e' && com[1] == 'n') break;
        if(com[0] == 'i'){
            cin >> key;
            insert(key);
        }else{
            cout << extract() << endl;
        }
    }
    return 0;
}

