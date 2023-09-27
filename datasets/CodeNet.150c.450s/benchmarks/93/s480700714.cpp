#include <cstdio>
#include <string>

const int N = 100005;
const long MAX = 2000000000;

struct Card {
    char name[10];
    int number;
};


void merge(struct Card *A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    struct Card L[N / 2 + 3], R[N / 2 + 3];
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = A[0]; R[n2] = A[0];
    L[n1].number = MAX; R[n2].number = MAX;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].number <= R[j].number) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(struct Card *A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}



int partition(struct Card *A, int p, int r) {
    int x = A[r].number;
    int i, j;
    i = p - 1;
    struct Card tmp;
    for( j = p; j < r; j ++) {
        if(A[j].number <= x) {
            i++;
            tmp = A[j];
            A[j] = A[i];
            A[i] = tmp;
        }
    }
    tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;
    return i + 1;
}

void quickSort(struct Card *A, int left, int right) {
    if (left > right) return;
    int q = partition(A, left, right);
    // q の場所は既にソートが終わっているので
    // q より左、および q より右の場所に関するソートをする必要がある
    quickSort(A, left, q - 1);
    quickSort(A, q + 1, right);
}

int main() {
    int n;
    scanf("%d", &n);
    struct Card A[N], B[N];
    for(int i = 0; i < n; i++) {
        scanf("%s", A[i].name);
        scanf("%d", &A[i].number);
        B[i] = A[i];
    }
    mergeSort(B, 0, n);
    quickSort(A, 0, n-1);
    bool flg = true;
    for(int i = 0; i < n; i++) {
        if (B[i].name[0] != A[i].name[0]) flg = false;
    }
    if (flg) printf("Stable\n");
    else printf("Not stable\n");
    for(int i = 0; i < n; i++) {
        printf("%s %d\n", A[i].name, A[i].number);
    }
    return 0;
}

