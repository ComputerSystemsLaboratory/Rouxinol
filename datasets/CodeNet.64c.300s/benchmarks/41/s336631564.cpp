#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

int left(int i, int n) {
    if (2*i <= n) {
        return 2*i;
    } else {
        return 0;
    }
}

int right(int i, int n) {
    if (2*i+1 <= n) {
        return 2*i+1;
    } else {
        return 0;
    }
}

int parent(int i) {
    if (i/2 > 0) {
        return i/2;
    } else {
        return 0;
    }
}

void swap(int a, int b, int* A) {
    int tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
}

void maxHeapify(int i, int* A, int n) {
    int largest;
    int l = left(i, n);
    int r = right(i, n);
    if (A[l] > A[i]) {
        largest = l;
    } else {
        largest = i;
    }
    if (A[r] > A[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(i, largest, A);
        maxHeapify(largest, A, n);
    }
}

int main() {
    int H;
    std::cin >> H;
    int* tree = (int *)malloc((H+1)*sizeof(int));
    tree[0]=-2000000001;
    for (int i=1; i<=H; i++) {
        std::cin >> tree[i];
    }

    for (int i=H/2; i>0; i--) {
        maxHeapify(i, tree, H);
    }

    for (int i=1; i<=H; i++) {
        std::cout << " " << tree[i];
    }
    std::cout << "\n";

    return 0;
}
