#include <iostream>
#include <math.h>
#include<iomanip>
#include <string>
using namespace std;

struct Card {
    char suit;
    int value;
};

void BubbleSort(struct Card A1[], int N){
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > i; j--) {
            if (A1[j].value < A1[j-1].value) {
                Card t = A1[j];
                A1[j] = A1[j - 1];
                A1[j - 1] = t;
            }
        }
    }
}

void SelectionSort(struct Card A2[], int N) {
    for (int i = 0; i < N; i++) {
        int minj = i;

        for (int j = i; j < N; j++)
            if(A2[j].value < A2[minj].value) minj = j;
        Card t = A2[i];
        A2[i] = A2[minj];
        A2[minj] = t;
    }
}

int main() {
    int N;
    Card A1[36], A2[36];
    int a1[36], a2[36], a3[36], b[13] = {};

    cin >> N;
    for (int i = 0; i < N; i++) cin >> A1[i].suit >> A1[i].value;
    for (int i = 0; i < N; i++) A2[i] = A1[i];
    BubbleSort(A1, N);
    SelectionSort(A2, N);
    for (int i =0; i < N; i++) {
        if (i) cout << " ";
        cout << A1[i].suit << A1[i].value;
    }
    cout << endl;
    cout << "Stable\n";

    for (int i= 0; i < N; i++) {
        if (i) cout << " ";
        cout << A2[i].suit << A2[i].value;
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        if (A2[i].suit != A1[i].suit) {
            cout << "Not stable\n";
            break;
        }
        if (i == N - 1) cout << "Stable\n";
    }

    return 0;
}