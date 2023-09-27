#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>

using namespace std;

#define SWAP(type, a, b) do { type t = a; a = b; b = t; } while(0)

typedef struct {
    int* verIdx;
    int num;
} Heap;

int* d; 
int* weight;
int n;

void makeMinHeap(Heap *heap, int idx);
void insert(Heap *heap, int key);
int extract(Heap *heap);

static inline int getParent(int idx) { return idx / 2; }
static inline int getLeft(int idx) { return idx * 2; }
static inline int getRight(int idx) { return idx * 2 + 1; }
static inline bool isCorrectHeapIdx(int idx, int heapSize) { return idx <= heapSize && 1 <= idx; }
static inline bool isEmpty(Heap *heap) { return heap->num <= 0; }

static inline int getMinCost(int idx) {
    return d[idx];
}

void makeMinHeap(Heap *heap, int idx) {
    int left = getLeft(idx);
    int right = getRight(idx);

    int minIdx = idx;
    if(isCorrectHeapIdx(left, heap->num) && getMinCost(heap->verIdx[minIdx]) > getMinCost(heap->verIdx[left])) {
        minIdx = left;
    } if(isCorrectHeapIdx(right, heap->num) && getMinCost(heap->verIdx[minIdx]) > getMinCost(heap->verIdx[right])) {
        minIdx = right;
    }

    if(minIdx != idx) {
        SWAP(int, heap->verIdx[minIdx], heap->verIdx[idx]);
        makeMinHeap(heap, minIdx);
    }
}

void insert(Heap *heap, int* key) {
    heap->verIdx[++heap->num] = *key;
    for(int i = getParent(heap->num); i >= 1; i = getParent(i)) {
        makeMinHeap(heap, i);
    }
}

void extract(Heap *heap, int* key) {
    *key = heap->verIdx[1];
    heap->verIdx[1] = heap->verIdx[heap->num--];
    makeMinHeap(heap, 1);
}

static inline bool isConnected(int s, int t) {
    return weight[s * n + t] != INT_MAX;
}

static inline int getWeight(int s, int t) {
    return weight[s * n + t];
}

void solve(int s) {
    Heap que;
    bool* isAddS = new bool[n]();

    que.verIdx = new int[n * n];
    que.num = 0;

    d = new int[n];
    d[s] = 0;
    for(int i = 0; i < n; i++) {
        if(s != i) {
            d[i] = INT_MAX;
        }
    }
    
    insert(&que, &s);

    while(1) {
        int u;
        while(1) {
            if(isEmpty(&que)) {
                return;
            } 

            extract(&que, &u);
            if(!isAddS[u]) {
                break;
            }
        }

        isAddS[u] = true;

        for(int i = 0; i < n; i++) {
            if(isConnected(u, i) && !isAddS[i]) {
                if(d[u] + getWeight(u, i) < d[i]) {
                    d[i] = d[u] + getWeight(u, i);
                }
                insert(&que, &i);
            }
        }
    }

    return;
}

int main() {

    scanf("%d", &n);

    weight = new int[n * n];

    for(int i = 0; i < n * n; i++) {
        weight[i] = INT_MAX;
    }
    

    for(int i = 0; i < n; i++) {
        int s;
        int deg;

        scanf("%d %d", &s, &deg);
        for(int j = 0; j < deg; j++) {
            int t;
            int w;

            scanf("%d %d", &t, &w);

            weight[s * n + t] = w;
        }
    }

    solve(0);

    for(int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
        
    }
}
