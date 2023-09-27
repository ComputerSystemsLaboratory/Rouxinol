#include <cstdio>
#include <algorithm>
#define MAX 2000000
#define INF (1<<30)

int h, A[MAX+1];

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

void increaseKey(int i, int k) {
    if (k < A[i]) return;
    A[i] = k;
    while (i > 1 && A[i / 2] < A[i]) {
        std::swap(A[i], A[i / 2]);
        i = i / 2;
    }
}

void insert(int k) {
    h++;
    A[h] = -INF;
    increaseKey(h, k);
}

int extract(void) {
    if (h < 1) return -INF;
    int m = A[1];
    A[1] = A[h];
    h--;
    maxHeapify(1);
    return m;
}

int main(void) {
    int i, k;
    char com[10];
    
    while (1) {
        scanf("%s", com);
        if (com[0] == 'e' && com[1] == 'n') break;
        if (com[0] == 'i') {
            scanf("%d", &k);
            insert(k);
        }
        if (com[0] == 'e') {
            printf("%d\n", extract());
        }
    }

    return 0;
}