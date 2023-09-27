#include<algorithm>
#include<stdio.h>

#define MAX 200000000

int size = 0;
int A[MAX + 1];

void insert(int A[], int k) {
    ++size;

    A[size] = k;
    int i = size;
    while (i/2 > 0 && A[i] > A[i/2]) {
        std::swap(A[i], A[i/2]);
        i = i / 2;
    }
}

void maxHeapfy(int A[], int root) {
    int left = root * 2;
    int right = root * 2 + 1;

    int max = root;
    if (left <= size && A[max] < A[left]) {
        max = left;
    }
    if (right <= size && A[max] < A[right]) {
        max = right;
    }

    if (max != root) {
        std::swap(A[root], A[max]);
        maxHeapfy(A, max);
    }
}

int extractMax(int A[]) {
    int max = A[1];
    A[1] = A[size];
    --size;
    maxHeapfy(A, 1);
    return max;
}

int main() {
    while (true){
        char c[100];
        scanf("%s", c);
        if (c[0] == 'i') {
            int k;
            scanf("%d", &k);
            insert(A, k);
        }
        else if (c[0] == 'e') {
            if (c[1] == 'x') {
                int max = extractMax(A);
                printf("%d\n", max);
            }
            else {
                break;
            }
        }
    }

    return 0;
}