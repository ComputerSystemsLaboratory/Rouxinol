#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int H_MAX = 2'000'000;

int A[H_MAX+1];
int H = 0;

int parent(int i)   { return i / 2; }
int left(int i)     { return 2 * i; }
int right(int i)    { return 2 * i + 1; }

void maxHeapify(int i) {
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
        maxHeapify(largest);
    }
}

void set_key(int i, int k) {
    A[i] = k;
    int p = parent(i);
    if (p > 0 && A[p] < k) {
        A[i] = A[p];
        set_key(p, k);
    }
}

void insert(int k) {
    ++H;
    set_key(H, k);
}

int extract() {
    int max = A[1];
    A[1] = A[H];
    --H;
    maxHeapify(1);
    return max;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    std::string command;
    int k;
    while (cin >> command) {
        if (command == "end") { break; }
        if (command == "insert") {
            cin >> k;
            insert(k);
        } else if (command == "extract") {
            cout << extract() << endl;
        }
    }

    return 0;
}