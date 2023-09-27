#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int H_MAX = 500'000;

int A[H_MAX+1];

int parent(int i)   { return i / 2; }
int left(int i)     { return 2 * i; }
int right(int i)    { return 2 * i + 1; }

void maxHeapify(int i, int H) {
    int l = left(i);
    int r = right(i);
    int largest = 0;
    if (l <= H && A[l] > A[i]) {
        largest = l;
    } else {
        largest = i;
    }
    if (r <= H && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest, H);
    }
}

void buildMaxHeap(int H) {
    for (int i=H/2; i>0; --i) {
        maxHeapify(i, H);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H;
    cin >> H;
    FOR(i,1,H+1) { cin >> A[i]; }
    buildMaxHeap(H);
    FOR(i,1,H+1) { cout << " " << A[i]; }
    cout << endl;

    return 0;
}