#include <bits/stdc++.h>
using namespace std;

template <typename T>
void max_heapify(std::vector<T> &A, std::size_t pos, std::size_t heapsize) {
    while(pos < heapsize / 2) {
        std::size_t l = (pos << 1) + 1;
        std::size_t r = (pos << 1) + 2;
        std::size_t largest = pos;
        if(l < heapsize && A[largest] < A[l]) largest = l;
        if(r < heapsize && A[largest] < A[r]) largest = r;
        
        if(largest == pos) break;
        std::swap(A[pos], A[largest]);
        pos = largest;
    }
}

template <typename T>
void build_max_heap(std::vector<T> &A) {
    for(int pos = A.size() / 2 - 1; pos >= 0; --pos) {
        max_heapify<T>(A, pos, A.size());
    }
}

template <typename T>
void heapsort(std::vector<T> &A) {
    build_max_heap<T>(A);
    for(int pos = A.size() - 1; pos > 0; --pos) {
        std::swap(A[0], A[pos]);
        max_heapify<T>(A, 0, pos);
    }
}

int main() {
    int H; cin >> H;
    vector<int> A(H);
    for(int i=0; i<H; ++i) cin >> A[i];
    build_max_heap<int>(A);
    for(int i=0; i<H; ++i) cout << ' ' << A[i];
    cout << endl;
}
