#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

void max_heapify(vector<int> &A, size_t i) {
    size_t l=i<<1, r=i<<1|1;
    size_t largest=(l<A.size()&&A[l]>A[i]? l:i);
    if (r<A.size() && A[r]>A[largest])
        largest = r;

    if (largest != i) {
        swap(A[i], A[largest]);
        max_heapify(A, largest);
    }
}

void max_heapify(vector<int> &A) {
    for (size_t i=(A.size()>>1)+1; --i;)
        max_heapify(A, i);
}

int main() {
    size_t H;
    scanf("%zu", &H);

    vector<int> A(H+1);
    for (size_t i=1; i<=H; ++i)
        scanf("%d", &A[i]);

    max_heapify(A);

    for (size_t i=1; i<=H; ++i)
        printf(" %d", A[i]);

    printf("\n");

    return 0;
}