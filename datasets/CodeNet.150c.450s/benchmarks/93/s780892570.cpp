#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX 100001
#define LN 100000000

struct Card {
    char moji;
    int val;
};

Card L[MAX/2], R[MAX/2]; // temporary arrays
int n;

// r??????n-1
int partition ( Card K[], int p, int r ) {
    int judge_n = K[r].val;
    int i = p-1;
    for ( int j = p; j <= r; j++ ) {
        if ( K[j].val <= judge_n ) {
            i++;
            std::swap(K[i], K[j]);
        }
    }
    return i; // this is the index of the judge_n
}

void quickSort ( Card K[], int start, int end ) {
    if (start < end) {
        int p = partition( K, start, end );
        quickSort( K, start , p-1 );
        quickSort( K, p+1, end );
    }
}


void merge(Card K[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) {
        L[i] = K[left+i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = K[mid+i];
    }
    L[n1].val = LN; R[n2].val = LN;
    int i = 0; int j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].val <= R[j].val) {
            K[k] = L[i];
            i++;
        }
        else if (L[i].val > R[j].val) {
            K[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card K[], int left, int right) {
    if (left+1 < right) {
        int mid = (left + right) / 2;
        mergeSort(K, left, mid);
        mergeSort(K, mid, right);
        merge(K, left, mid, right);
    }
}

int main() {
    Card A[MAX], B[MAX];
    char S[10];
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        scanf("%s %d", S, &A[i].val);
        A[i].moji = S[0];
        B[i] = A[i];
    }

    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);
    
    int i = 0;
    while (i < n) {
        if (A[i].moji == B[i].moji) i++;
        else break;
    }
    if (i == n) printf("Stable\n");
    else printf("Not stable\n");

    for ( int i = 0; i < n; i++ ) {
        printf("%c %d\n", A[i].moji, A[i].val);
    }

    return 0;
}