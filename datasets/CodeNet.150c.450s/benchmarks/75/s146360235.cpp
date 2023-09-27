#include <cstdio>
#include <algorithm>

int h, A[600000];

void maxHeapify(int i) {
    int l, r, largest;
    l = i * 2;
    r = l + 1;

    if (l <= h && A[l] > A[i]) largest = l;
    else largest = i;
    if (r <= h && A[r] > A[largest]) largest = r;

    if (largest != i) {
        std::swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int main(void) {
    int i;
    scanf("%d", &h);
    for (i = 1; i <= h; i++) scanf("%d", &A[i]);

    for (i = h / 2; i >= 1; i--) maxHeapify(i);

    for (i = 1; i <= h; i++) printf(" %d", A[i]);
    printf("\n");

    return 0;
}