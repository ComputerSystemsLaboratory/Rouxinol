/*
    与えられた重み付きグラフ G=(V,E) に対する最小全域木の辺の重みの総和を計算するプログラムを作成してください。

    入力
    最初の行に G の頂点数 n が与えられます。続く n 行で G を表す n×n の隣接行列 A が与えられます。A の要素 aij は、頂点 i と頂点 j を結ぶ辺の重みを表します。ただし、辺がなければ-1 で示されます。

    出力
    G の最小全域木の辺の重みの総和を１行に出力してください。

    制約
    1≤n≤100
    0≤aij≤2,000 (aij≠−1 のとき)
    aij=aji
    グラフ G は連結である。
*/

#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>

using namespace std;

#define SWAP(type, a, b) do { type t = a; a = b; b = t; } while(0)

typedef struct {
    int weight;
    int to;
} Edge;

typedef struct {
    Edge *edge;
    int num;
} Heap;

void makeMinHeap(Heap *heap, int idx);
void insert(Heap *heap, int key);
int extract(Heap *heap);

static inline int getParent(int idx) { return idx / 2; }
static inline int getLeft(int idx) { return idx * 2; }
static inline int getRight(int idx) { return idx * 2 + 1; }
static inline bool isCorrectHeapIdx(int idx, int heapSize) { return idx <= heapSize && 1 <= idx; }
static inline bool isEmpty(Heap *heap) { return heap->num <= 0; }

void makeMinHeap(Heap *heap, int idx) {
    int left = getLeft(idx);
    int right = getRight(idx);

    int minIdx = idx;
    if(isCorrectHeapIdx(left, heap->num) && heap->edge[minIdx].weight > heap->edge[left].weight) {
        minIdx = left;
    } if(isCorrectHeapIdx(right, heap->num) && heap->edge[minIdx].weight > heap->edge[right].weight) {
        minIdx = right;
    }

    if(minIdx != idx) {
        SWAP(Edge, heap->edge[minIdx], heap->edge[idx]);
        makeMinHeap(heap, minIdx);
    }
}

void insert(Heap *heap, Edge* key) {
    heap->edge[++heap->num] = *key;
    for(int i = getParent(heap->num); i >= 1; i = getParent(i)) {
        makeMinHeap(heap, i);
    }
}

void extract(Heap *heap, Edge* key) {
    *key = heap->edge[1];
    heap->edge[1] = heap->edge[heap->num--];
    makeMinHeap(heap, 1);
}

int n;
int* weight;

static inline bool isConnected(int s, int t) {
    return weight[s * n + t] != INT_MAX;
}

static inline int getWeight(int s, int t) {
    return weight[s * n + t];
}

int getMimimumSpanningTree() {
    bool* isAddMst = new bool[n]();
    Heap connectEdge;
    Edge edge;
    int sum = 0;
    int v = 0;

    connectEdge.edge = new Edge[n * n];
    connectEdge.num = 0;
    
    while(1) {
        isAddMst[v] = true;

        for(int i = 0; i < n; i++) {
            if(isConnected(v, i) && !isAddMst[i]) {
                edge.weight = getWeight(v, i);
                edge.to = i;
                insert(&connectEdge, &edge);
            }
        }

        while(1) {
            if(isEmpty(&connectEdge)) {
                return sum;
            }

            extract(&connectEdge, &edge);

            if(!isAddMst[edge.to]) {
                break;
            }
        }

        v = edge.to;
        sum += edge.weight;
    }

    return sum;
}

int main() {

    scanf("%d", &n);

    weight = new int[n * n];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int w;
            scanf("%d", &w);
            weight[i * n + j] = (w == -1) ? INT_MAX : w;
        }
    }

    cout << getMimimumSpanningTree() << endl;
}
