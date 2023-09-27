#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

const int SENTINEL = 1000000001;

struct card{
    char type;
    int num;
};

void merge(card A[], int left, int mid, int right) {
    card leftA[50001];
    for (int i = left; i < mid; i++) {
        leftA[i - left] = A[i];
    }
    leftA[mid - left] = card{'S', SENTINEL};
    int leftCur = 0;
    
    card rightA[50001];
    for (int j = mid; j < right; j++) {
        rightA[j - mid] = A[j];
    }
    rightA[right - mid] = card{'S', SENTINEL};
    int rightCur = 0;
    
    for (int i = left; i < right; i++) {
        if (leftA[leftCur].num <= rightA[rightCur].num) {
            A[i] = leftA[leftCur];
            leftCur++;
        } else {
            A[i] = rightA[rightCur];
            rightCur++;
        }
    }
}

void mergeSort(card A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int partition(card A[], int p, int r) {
    int i = p - 1;
    card x, t;
    x = A[r];
    for (int j = p; j < r; j++) {
        if (A[j].num <= x.num) {
            i++;
            t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }
    t = A[i+1]; A[i+1] = x; A[r] = t;

    return i + 1;
}

void quickSort(card A[], int p, int r) {
    int q;
    if (p < r) {
        q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main() {
    int N, I;
    card A[100000]; card B[100000];
    char S[10];
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", S);
        scanf("%d", &I);
        A[i].type = B[i].type = S[0];
        A[i].num = B[i].num = I;
    }
    
    quickSort(A, 0, N - 1);
    mergeSort(B, 0, N);
    
    string isStable = "Stable";
    for (int i = 0; i < N; i++) {
        if (A[i].type != B[i].type) {
            isStable = "Not stable";
            break;
        }
    }
    
    cout << isStable << endl;
    
    
    for (int i = 0; i < N; i++) {
        printf("%c %d\n", A[i].type, A[i].num);
    }

    return 0;
}
