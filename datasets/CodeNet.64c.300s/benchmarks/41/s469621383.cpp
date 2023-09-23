#include <iostream>
using namespace std;

#define MAX_SIZE 500100

int T[MAX_SIZE];
int H;

void maxHeapify(int i) {
    int left = 2 * i, right = 2 * i + 1;
    int largest = i;
    if (left <= H && T[left] > T[i]) largest = left;
    if (right <= H && T[right] > T[largest]) largest = right;
    if (largest != i) {
        swap(T[largest], T[i]);
        maxHeapify(largest);
    }
    return;
}

void buildMaxHeap() {
    for (int i = H / 2; i >= 1; i--) {
        maxHeapify(i);
    }
    return;
}

void print() {
    for (int i = 1; i <= H; i++) cout << " " << T[i];
    cout << endl;
    return;
}

int main() {
    cin >> H;
    for (int i = 1; i <= H; i++) cin >> T[i];

    buildMaxHeap();

    print();

    return 0;
}
