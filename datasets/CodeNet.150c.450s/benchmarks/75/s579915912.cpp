#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

const int MAX = 500000;

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

int H;
int A[MAX+1];


void max_heapify(int* A, int i) {
    int l = left(i), r = right(i), largest = i;
    if (l <= H && A[l] > A[i]) {
        largest = l;
    }
    if (r <= H && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(A[i], A[largest]);
        max_heapify(A, largest);
    }
}


void build_max_heap(int* A) {
    for (int i = H / 2; i >= 1; i--) {
        max_heapify(A, i);
    }
}


int main() {
    cin >> H;
    for (int i = 1; i <= H; i++) { cin >> A[i]; }
    build_max_heap(A);
    for (int i = 1; i <= H; i++) {
        cout << " " << A[i];
    }
    cout << endl;
}

