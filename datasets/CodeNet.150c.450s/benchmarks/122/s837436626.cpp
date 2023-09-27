#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ios>
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

void insert(vector<int> & heap, int key){
    heap.push_back(key);
    int idx = heap.size() - 1;
    int pkey = heap[parent(idx)];
    while (idx > 1 && key > pkey){
        heap[idx] = pkey;
        idx = parent(idx);
        heap[idx] = key;
        pkey = heap[parent(idx)];
    }
}

int extractMax(vector<int> & heap){
    int maxval = heap[1];
    heap[1] = heap[heap.size() - 1];
    heap.pop_back();
    maxHeapify(heap, 1);
    return maxval;
}


void buildMaxHeap(vector<int> & heap){
    for (int i = (heap.size() - 1)/2; i != 0; --i) maxHeapify(heap, i);
}


int main()
{
    ios::sync_with_stdio(false);
    vector<int> heap = {0};
    string command;
    int key;
    while (cin >> command){
        if (command[0] == 'i'){
            cin >> key;
            insert(heap, key);
        }else if (command[1] == 'x'){
            cout << extractMax(heap) << endl;
        }else{
            break;
        }
    }
    return 0;
}