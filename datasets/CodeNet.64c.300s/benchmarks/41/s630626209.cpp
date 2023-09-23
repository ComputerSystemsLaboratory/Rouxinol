#include<iostream>
using namespace std;

const int MAX = 500000;
int heap[MAX+1];
int heap_size;
void swap(int *x, int *y){
    int k = *y;
    *y = *x;
    *x = k;
}
int left(int x){
    return 2*x;
}
int right(int x){
    return 2*x+1;
}
void max_heapify(int A[], int i){
    int l, r, largest;
    l = left(i);
    r = right(i);
    if (l <= heap_size && heap[l] > heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= heap_size && heap[r] > heap[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(&A[i], &A[largest]);
        max_heapify(A, largest);
    }
    
}

void build_maxheap(int A[]){
    for (int i = heap_size/2; i >= 1; i--)
    {
        max_heapify(A, i);
    }
    
}

int main(){
    cin >> heap_size;
    for (int i = 1; i <= heap_size; i++)
    {
        cin >> heap[i];
    }
    build_maxheap(heap);
    for (int i = 1; i <= heap_size; i++)
    {
        cout << " " << heap[i];
    }
    cout << endl;
}
