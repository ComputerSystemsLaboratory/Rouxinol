//
// Created by sanyinchen on 17/4/24.
//
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

void _print(vector<int> res) {
    for (int i = 1; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

void maxHeap(vector<int> &heap, int i) {

    int left = 2 * i;
    int right = 2 * i + 1;
    int lagest = i;
    if (left < heap.size() && left >= 1) {
        if (heap[left] > heap[lagest]) {
            lagest = left;
        }
    }

    if (right < heap.size() && right >= 1) {
        if (heap[right] > heap[lagest]) {
            lagest = right;
        }
    }

    if (lagest != i) {
        swap(heap[lagest], heap[i]);
        maxHeap(heap, lagest);
    }

}

void insertHeap(vector<int> &heap, int key) {
    //cout << "insert--" << key << endl;
    heap.push_back(key);
    int parentIndex = heap.size() - 1;
    int keyIndex = parentIndex;
    while (keyIndex > 1) {
        parentIndex /= 2;
        if (heap[parentIndex] < heap[keyIndex]) {
            swap(heap[parentIndex], heap[keyIndex]);
            keyIndex = parentIndex;
        } else {
            break;
        }
    }
}

void extractHeap(vector<int> &heap) {
    //cout << "extractHeap--";
    if (heap.size() >= 1) {
        cout << heap[1] << endl;
        swap(heap[1], heap[heap.size() - 1]);
        heap.pop_back();
        maxHeap(heap, 1);
    }
}

int main() {
    //freopen("../files/in.txt", "r", stdin);
    vector<int> heap;
    heap.push_back(-1);
    string input;
    int key;
    while (true) {

        cin >> input;
        if (input == "insert") {
            cin >> key;
            insertHeap(heap, key);
        }
        if (input == "extract") {
            extractHeap(heap);
        }
        if (input == "end") {
            break;
        }
       // _print(heap);
    }

    return 0;
}