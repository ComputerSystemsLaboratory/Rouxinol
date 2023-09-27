#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int parent(int index) {
    if (index == 1) {
        return 0;
    }

    return index / 2;
}

int get_left(int index) {
    return 2 * index;
}

int get_right(int index) {
    return (2 * index) + 1;
}

vector<int>vec;
void maxHeapify(int index) {
    int H = vec.size();
    int l = get_left(index);
    int r = get_right(index);
    int largest;
    if (l <= H && vec[l] > vec[index]) {
        largest = l;
    } else {
        largest = index;
    }

    if (r <= H && vec[r] > vec[largest]) {
        largest = r;
    }

    if (largest != index) {
        int tmp = vec[index];
        vec[index] = vec[largest];
        vec[largest] = tmp;
        maxHeapify(largest);
    }
}

void buildMaxHeap() {
    int size = vec.size() / 2;
    for (int i=size; i >= 1; i--) {
        maxHeapify(i);
    }
}

int main() {
    int N;
    cin >> N;
    vec.resize(N+1);
    for (int i=1; i <= N; i++) {
        cin >> vec.at(i);
    }

    buildMaxHeap();
    for (int i=1; i <= N; i++) {
        cout << " ";
        cout << vec[i];
    }

    cout << endl;
    return 0;
}
