#include <iostream>
#include <stdio.h>
#include <algorithm>

struct Card {
    char suit;
    int value;
};

void trace(Card a[], int size) {
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            printf(" ");
        }
        printf("%c%d", a[i].suit, a[i].value);
    }
    printf("\n");
}

void BubbleSort(Card A[], int N) {
    int count  = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = N - 1; j > i; --j) {
            if ( A[j].value < A[j-1].value ){
                std::swap(A[j], A[j-1]);
                ++count;
            }
        }
    }

    trace(A, N);
}

void SelectionSort(Card A[], int N) {
    int count  = 0;
    for (int i = 0; i < N; ++i) {
        int min = i;
        for (int j = i; j < N; ++j) {
            if (A[j].value < A[min].value) {
                min = j;
            }
        }
        if (i != min) {
            std::swap(A[i], A[min]);
            count++;
        }
    }

    trace(A, N);
}

bool IsStable (Card A[], Card B[], int N) {
    for (int i = 0; i < N; ++i) {
        if (A[i].suit != B[i].suit || A[i].value != B[i].value) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    Card A[100], B[100];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i].suit >> A[i].value;
        B[i] = A[i];
    }

    BubbleSort(A, N);
    printf("Stable\n");
    SelectionSort(B, N);
    IsStable(A, B, N) ? printf("Stable\n") : printf("Not stable\n");
    return 0;
}