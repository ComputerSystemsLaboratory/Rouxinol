#include <cstdio>
#include <cstdlib>
#define MAX 2000001
#define NIL -1

typedef struct {
    int size;
    int S[MAX];
} Heap;

int Left(int i) {
    return 2 * i;
}

int Right(int i) {
    return (2 * i + 1);
}

int Parent(int i) {
    return i / 2;
}

void increaseKey(Heap *H, int i, int key) {
    if (key < H->S[i]) {
        printf("too small key");
    } else {
        H->S[i] = key;
        while (1 < i && H->S[Parent(i)] < H->S[i]) {
            int p = Parent(i);
            int tmp = H->S[p]; H->S[p] = H->S[i]; H->S[i] = tmp;
            i = p;
        }
    }
}

void MaxHeapify(Heap *H, int i) {
    int l = Left(i);
    int r = Right(i);
    int largest = i;
    if ( l <= H->size && H->S[i] < H->S[l]) largest = l;
    if ( r <= H->size && H->S[largest] < H->S[r]) largest = r;
    if (largest != i) {
        int tmp = H->S[i]; H->S[i] = H->S[largest]; H->S[largest] = tmp;
        MaxHeapify(H, largest);
    }

}

void extractMax(Heap *H) {
    if (H->size < 1) {
        printf("over flow\n");
    } else {
        int max = H->S[1];
        printf("%d\n", max);
        H->S[1] = H->S[H->size];
        H->size--;
        MaxHeapify(H, 1);
    }
}

void insert(Heap *H, int k) {
    H->size++;
    H->S[H->size] = NIL;
    increaseKey(H, H->size, k);
}

int main () {
    Heap *H = (Heap *)malloc(sizeof(Heap));
    H->size = 0;
    for (;;) {
        char c[10];
        int k;
        scanf(" %s %d", c, &k);
        if (c[0] == 'i') {
            insert(H, k);
        } else if (c[0] == 'e' && c[1] == 'x') {
            extractMax(H);
        } else {
            break;
        }
    }
    return 0;
}