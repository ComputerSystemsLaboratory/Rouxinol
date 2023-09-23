#include <bits/stdc++.h>

using namespace std;

void swap(void *a,void *b){
    void *c = a;
    a = b;
    b = c;
}

void make_heap(int *heap,int size,int idx){
    int left  = 2*idx+1;
    int right = left+1;

    int largest = idx;
    if(left < size && heap[idx] < heap[left])
        largest = left;
    if(right < size && heap[largest] < heap[right])
        largest = right;

    if(largest != idx){
        swap(heap[idx],heap[largest]);
        make_heap(heap,size,largest);
    } 
}


void build_heap(int *heap,int size){
    for(int i=size/2-1;i>-1;i--)
        make_heap(heap,size,i);
}


int main(){
    int h; cin >> h;
    int heap[h];
    for(int i=0;i<h;i++) cin >> heap[i];
    build_heap(heap,sizeof(heap)/sizeof(heap[0]));

    for(int i=0;i<h;i++) cout << " " << heap[i];
    cout << endl;

}
