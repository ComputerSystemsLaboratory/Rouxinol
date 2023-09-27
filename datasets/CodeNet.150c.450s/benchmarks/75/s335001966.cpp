#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

inline int parent(int i) {return i >> 1;}
inline int left(int i) {return i << 1;}
inline int right(int i) {return (i << 1) + 1;}

void maxHeapify(vector<int> & heap, int i){
    int H = heap.size() - 1;
    auto L = left(i);
    auto R = right(i);
    int largest = (L <= H && heap[L] > heap[i]) ? L : i;
    if (R <= H && heap[R] > heap[largest]) largest = R;
    if (largest != i){
        int tmp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = tmp;
        maxHeapify(heap, largest);
    }
}

void buildMaxHeap(vector<int> & heap){
    for (int i = (heap.size() - 1)/2; i != 0; --i) maxHeapify(heap, i);
}


int main()
{
    int H = 0;
    cin >> H;
    vector<int> heap(H + 1);
    heap[0] = 0;
    for (auto it = heap.begin() + 1; it != heap.end(); ++it) cin >> *it;
    buildMaxHeap(heap);
    for (auto it = heap.begin() + 1; it != heap.end(); ++it) cout << ' ' << *it;
    cout << endl;
    return 0;
}