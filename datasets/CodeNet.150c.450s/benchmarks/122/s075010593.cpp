#include <bits/stdc++.h>
using namespace std;
#define MAX 2000000

int h = 0;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

void maxHeapify(vector<int> &T, int i) {
    int l = left(i);
    int r = right(i);
    int Large;
    if (l <= h && T[l] > T[i]) {
        Large = l;
    } else {
        Large = i;
    }
    if (r <= h && T[r] > T[Large]) {
        Large = r;
    }

    if (Large != i) {
        swap(T[i], T[Large]);
        maxHeapify(T, Large);
    }
}

void buildMaxHeap(vector<int> &T) {
    for (int i = h / 2; i >= 1; i--) {
        maxHeapify(T, i);
    }
}

void heapIncreaseKey(vector<int> &T, int i, int key) {
    T[i] = key;
    while (i > 1 && T[parent(i)] < T[i]) {
        swap(T[i], T[parent(i)]);
        i = parent(i);
    }
}

int heapExtractMax(vector<int> &T) {
    int great = T[1];
    T[1] = T[h];
    h--;
    maxHeapify(T, 1);

    return great;
}

void insert(vector<int> &T, int key) {
    h++;
    T[h] = -MAX;
    heapIncreaseKey(T, h, key);
}

int main() {
    vector<int> T(MAX);
    while (true) {
        char S[7];
        scanf("%s", S);
        if (S[0] == 'i') {
            int key;
            scanf("%d", &key);
            insert(T, key);
        } else if (S[2] == 't') {
            int priority = heapExtractMax(T);
            printf("%d\n", priority);
        } else if (S[2] == 'd') {
            break;
        }
    }

    return 0;
}
