#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int h;

void maxHeapify(vector<int> &heap, int i){
    int left_index = 2 * i;
    int right_index = 2 * i + 1;

    int largest_index = i;

    if(left_index <= h && heap.at(left_index) > heap.at(i)){
        largest_index = left_index;
    }
    if(right_index <= h && heap.at(right_index) > heap.at(largest_index)){
        largest_index = right_index;
    }

    if(largest_index != i){
        // インデックスiの中身とインデックスlargest_indexの中身をswap
        int tmp = heap.at(i);
        heap.at(i) = heap.at(largest_index);
        heap.at(largest_index) = tmp;
        // swapした結果、largest_indexでのヒープが崩れる可能性があるので再びheapify
        maxHeapify(heap, largest_index);
    }

}

void buildMaxHeap(vector<int> &heap){
    for(int i = h/2; i > 0; i--){
        maxHeapify(heap, i);
    }
}
int main(){
    cin >> h;
    // heapは1オリジンとする
    vector<int> heap(h+1); 

    //ヒープの読み込み
    for(int i = 1; i < h+1; i++){
        cin >> heap.at(i);
    }

    buildMaxHeap(heap);
    
    for(int i = 1; i < h + 1; i++){
        cout << " " << heap.at(i);
    }
    cout << endl;

}
