#include <iostream>
using namespace std;
#define MAX 2000000

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

int main(){
    cin >> gSize;
    
    for(int i = 1;i <= gSize;++i) cin >> gHeap[i];
    // buildMaxHeap
    for(int i = gSize / 2;i >= 1;--i)maxHeapify(i);
    
    for(int i = 1;i <= gSize;++i){
        cout << " " << gHeap[i];
    }
    cout << endl;
    
    return 0;
}

