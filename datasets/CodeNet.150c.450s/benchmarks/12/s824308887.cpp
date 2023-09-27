#include <cstdio>
#include <iostream>

using namespace std;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return 2 * i;
}

int right(int i) {
    return 2 * i + 1;
}

int main() {
    int H;
    scanf("%d", &H);

    int Heap[H + 1];
    for (int i = 1; i < H + 1; ++i)
        scanf("%d", &Heap[i]);

    for (int i = 1; i < H + 1; ++i) {
        cout << "node " << i << ": key = " << Heap[i] << ", ";
        if (parent(i) >= 1)
            cout << "parent key = " << Heap[parent(i)] << ", ";
        if (left(i) <= H)
            cout << "left key = " << Heap[left(i)] << ", ";
        if (right(i) <= H)
            cout << "right key = " << Heap[right(i)] << ", ";
        cout << endl;
    }

    return 0;
}