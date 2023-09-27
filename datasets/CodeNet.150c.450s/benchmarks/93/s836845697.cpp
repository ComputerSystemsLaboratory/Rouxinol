#include <stdio.h>

using namespace std;
#define MAX 100000

struct Card {
    char suit;
    int value;
};
Card tempCard[MAX];

void swap(Card A[], int index1, int index2) {
    int temp;
    char c;
    temp = A[index1].value;
    c = A[index1].suit;

    A[index1].value = A[index2].value;
    A[index1].suit = A[index2].suit;

    A[index2].value = temp;
    A[index2].suit = c;
}

int partition(Card A[], int p, int r) {
    Card x = A[r];
    int i = p -1;
    for(int j = p; j <= r-1; j++) {
        if(A[j].value <= x.value) {
            i = i + 1;
            swap(A, i, j);
        }
    }
    swap(A, i+1, r);
    return i+1;
}

void quickSort(Card A[], int p, int r) {
    if(p >= r) return;
    int index = partition(A, p, r);
    quickSort(A, p, index-1);
    quickSort(A, index+1, r);
}

void bubbleSort(Card A[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(A[j].value > A[j+1].value) swap(A, j, j+1);
        }
    }
}

void merge(Card A[], int lo, int mid, int hi) {
    for(int i = lo; i <= hi; i++) {
        tempCard[i] = A[i];
    }
    int i = lo, j = mid+1;
    for(int k = lo; k <= hi; k++) {
        if(i > mid) A[k] = tempCard[j++];
        else if(j > hi) A[k] = tempCard[i++];
        else if(tempCard[i].value <= tempCard[j].value) A[k] = tempCard[i++];
        else A[k] = tempCard[j++];
    }
}

void mergeSort(Card A[], int lo, int hi) {
    if(lo >= hi) return;
    int mid = (lo+hi)/2;
    mergeSort(A, lo, mid);
    mergeSort(A, mid+1, hi);
    merge(A, lo, mid, hi);
}

int main()
{
    int n, temp;
    Card A[MAX], B[MAX];
    char s[10];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
       scanf("%s %d", s, &temp);
       A[i].suit = B[i].suit = s[0];
       A[i].value = B[i].value = temp;
    }

    quickSort(A, 0, n-1);
    //bubbleSort(B, n);
    mergeSort(B, 0, n-1);


    int stable = 1;
    for(int i = 0; i < n; i++) {
        if(A[i].suit != B[i].suit) stable = 0;
    }
    if(stable == 1)
        printf("Stable\n");
    else
        printf("Not stable\n");


    for(int i = 0; i < n; i++) {
        printf("%c %d\n", A[i].suit, A[i].value);
    }
    return 0;
}