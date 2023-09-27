#include <iostream>
#include <stdio.h>
#define MAX 100


struct Card {
    char value;
    char mark;
};


bool isStable(Card c1[], Card c2[], int n) {
    for (int i = 0; i < n; i++) {
        if (c1[i].mark != c2[i].mark) {
            return false;
        }
    }
    return true;
}

void bubbleSort( Card card[], int n ) {
    int flag = 1;
    int index = 0;
    while (flag) {
        flag = 0;
        for ( int j = n-1; j > index; j-- ) {
            if ( card[j].value < card[j-1].value ) {
                std::swap(card[j], card[j-1]);
                flag = 1;
            }
        }
        index ++;
    }
}

void selectionSort(Card card[], int n) {
    for ( int i = 0; i < n - 1; i++ ) {
        int minj = i + 1;
        for ( int j = i + 1; j < n; j++ ) {
            if ( card[minj].value > card[j].value ) {
                minj = j;
            }
        }
        if ( card[i].value > card[minj].value ) {
            std::swap(card[i], card[minj]);
        }
    }
}



int main() {
    int n;
    Card A[MAX], B[MAX];
    scanf( "%d\n", &n );
    
    for ( int i = 0; i < n; i++ ) {
        std::cin >> A[i].mark;
        std::cin >> A[i].value;
    }
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }
    
    bubbleSort(A, n);
    for ( int i = 0; i < n; i++ ) {
        if ( i ) std::cout << " ";
        std::cout << A[i].mark << A[i].value;
    }
    std::cout << std::endl;
    std::cout << "Stable" << std::endl;
    
    selectionSort(B, n);
    for ( int i = 0; i < n; i++ ) {
        if ( i ) std::cout << " ";
        std::cout << B[i].mark << B[i].value;
    }
    
    std::cout << std::endl;
    if (isStable(A, B, n)) std::cout << "Stable" << std::endl;
    else std::cout << "Not stable" << std::endl;
    
    return 0;
}