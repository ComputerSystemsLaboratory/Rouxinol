#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
const long long INFLL = 1LL << 60;
const int INFINT = 1 << 30;
const long long MOD = 1e9 + 7;

template <class T> void vecout(T V) {
    auto t = V.begin();
    *t++;
    while(t != V.end()) {
        cout << " " << *t++;
        // if(t != V.end()) cout << " ";
    }
    cout << endl;
};

int n;

void maxHeapify(vector<int> &A, int i) {
    int largest;
    int l = i * 2;
    int r = i * 2 + 1;
    if(l <= n && A.at(l) > A.at(i)) {
        largest = l;
    } else {
        largest = i;
    }
    if(r <= n && A.at(r) > A.at(largest)) {
        largest = r;
    }

    if(largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}
void buildMaxHeap(vector<int> &A) {
    for(int i = n / 2; i >= 1; i--)
        maxHeapify(A, i);
}

int main() {
    cin >> n;
    vector<int> Heap(n + 1);
    rep(i, 1, n + 1) cin >> Heap[i];
    buildMaxHeap(Heap);
    vecout(Heap);
}

