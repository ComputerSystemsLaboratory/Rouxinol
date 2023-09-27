#include <stdio.h>

#define NMAX 100000
#define INF (1 << 30)

typedef struct {
    char color;
    int val;
} CARD;

int merge(CARD A[], int left, int mid, int right) {
    CARD L[NMAX], R[NMAX];
    int i, j, k, cnt;
    for (i = 0; i < mid - left; i++) {
        L[i] = A[left + i];
    }
    L[i].val = INF;
    for (i = 0; i < right - mid; i++) {
        R[i] = A[mid + i];
    }
    R[i].val = INF;
    i = 0, j = 0, cnt = 0;
    for (k = left; k < right; k++) {
        if (L[i].val <= R[j].val) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            // cnt += mid - left - i;
        }
        cnt++;
    }
    return cnt;
}

int mergeSort(CARD A[], int left, int right) {
    if (right - left <= 1) {
        return 0;
    }
    int mid = (left + right) / 2, cnt = 0;
    cnt += mergeSort(A, left, mid);
    cnt += mergeSort(A, mid, right);
    cnt += merge(A, left, mid, right);
    return cnt;
}

int partition(CARD A[], int p, int r) {
    int i = p - 1, j = p, x = A[r].val;
    CARD t;
    while (j < r) {
        if (A[j].val > x) {
            // A[p,i]<=x
            j++;
        } else {
            // A[i,j)>x
            i++;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
            j++;
        }
    }
    t = A[i + 1];
    A[i + 1] = A[r];
    A[r] = t;
    return i + 1;
}

void quickSort(CARD A[], int p, int r) {
    if (r - p <= 0) {
        return;
    }
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
}

int main() {
    CARD A[NMAX], B[NMAX];
    int n;
    scanf("%d", &n);
    char buf[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", buf, &A[i].val);
        A[i].color = buf[0];
        B[i] = A[i];
    }
    quickSort(A, 0, n - 1);
    mergeSort(B, 0, n);
    int b = true;
    for (int i = 0; i < n; i++) {
        if (A[i].color != B[i].color || A[i].val != B[i].val) {
            b = false;
            break;
        }
    }
    if (b) {
        printf("Stable\n");
    } else {
        printf("Not stable\n");
    }

    for (int i = 0; i < n; i++) {
        printf("%c %d\n", A[i].color, A[i].val);
    }
    return 0;
}
