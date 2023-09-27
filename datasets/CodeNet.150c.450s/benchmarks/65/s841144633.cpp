#include<iostream>
#include<stdio.h>
using namespace std;
static const int MAX = 100;

struct Card {
    char suit;
    char value;
};

void printLine (Card A[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%c%c", A[i].suit, A[i].value);
    }
    printf("\n");
}

void bubbleSort(Card C[], int N) {
    int cnt = 0;
    for (int i = N - 1; i > 0; i--) {
        Card left = C[i-1];
        Card right = C[i];
        if (left.value > right.value) {
            C[i-1] = right;
            C[i] = left;
            cnt++;
        }
    }
    if (cnt > 0) {
        bubbleSort(C, N);
    }
}

void selectionSort(Card C[], int N, int step) {
    int min = -1;
    int minIdx = -1;
    for (int i = step; i < N; i++) {
        if (i == step) {
            min = C[i].value;
            minIdx = i;
            continue;
        }
        if (C[i].value < min) {
            min = C[i].value;
            minIdx = i;
        }
    }
    
    if (min == -1) {
        return;
    }
    
    if (minIdx != step) {
        Card v = C[step];
        C[step] = C[minIdx];
        C[minIdx] = v;
    }
    
    step++;
    selectionSort(C, N, step);
}

bool isStable(Card C[], int N, Card left, Card right) {
    Card P[N];
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (C[i].value == left.value) {
            P[cnt] = C[i];
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++) {
        if (P[i].value == left.value && P[i].suit == left.suit) {
            return P[i+1].value == right.value && P[i+1].suit == right.suit;
        }
    }
    return false;
}

// 同じ数字を持つカードが複数ある場合、それらが入力に
// 出現する順序で出力されることを「安定な出力」と評価
void checkStable(Card Original[], Card Sorted[], int N) {
    bool stable = true;
    for (int i = 1; i < N; i++) {
        Card left = Sorted[i-1];
        Card right = Sorted[i];
        if (left.value == right.value) {
            stable = isStable(Original, N, left, right) && stable;
        }
    }
    if (stable) {
        printf("%s", "Stable\n");
    } else {
        printf("%s", "Not stable\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    // Set input array to A
    Card A[MAX];
    for (int i = 0; i < N; i++) {
        cin >> A[i].suit >> A[i].value;
    }
    
    // Copy A to C1 and C2
    Card C1[MAX];
    Card C2[MAX];
    for (int i = 0; i < N; i++) {
        C1[i] = A[i];
        C2[i] = A[i];
    }
    
    // Bubble sort
    bubbleSort(C1, N);
    printLine(C1, N);
    
    // Stable ?
    checkStable(A, C1, N);
    
    // Selection sort
    selectionSort(C2, N, 0);
    printLine(C2, N);
    
    // Stable ?
    checkStable(A, C2, N);
   
    return 0;
}

