#include <stdio.h>
#include<algorithm>

using namespace std;

const static int N = 36;
typedef struct{
    int value;
    char suit;
}card;

void print(card A[], int n) {
    for(int i = 0; i < n; i++) {
        if(i) printf(" ");
        printf("%c%d", A[i].suit, A[i].value);
    }

}

void swapCard(card A[], int index1, int index2) {
    card temp = A[index1];
    A[index1] = A[index2];
    A[index2] = temp;
}

void bubbleSort(card A[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = n-1; j >= i+1; j--) {
            if(A[j].value < A[j-1].value)
                swapCard(A, j, j-1);
        }
    }
}

void selectionSort(card A[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        int mini = i;
        for(j = i; j < n; j++) {
            if(A[j].value < A[mini].value)
                mini = j;
        }
        if(A[i].value != A[mini].value)
            swapCard(A, i, mini);
    }
}

bool isStable(card b[], card s[], int n) {
    for(int i = 0; i < n; i++) {
        if(b[i].suit != s[i].suit)
            return false;
    }
    return true;
}

int main()
{
    int n;
    card A[N];
    card b[N];
    card s[N];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf(" %c%d", &A[i].suit, &A[i].value);
        b[i] = A[i];
        s[i] = A[i];
    }
    bubbleSort(b, n);
    print(b, n);
    printf("\nStable\n");
    selectionSort(s, n);
    print(s, n);
    if(isStable(b, s, n))
        printf("\nStable\n");
    else
        printf("\nNot stable\n");
    return 0;
}