//
//  ALDS1_2_C.cpp
//  
//
//  Created by ?¢¨????????£??? on 2015/11/24.
//
//

#include <stdio.h>
#include <iostream>
using namespace::std;

struct Card{
    char suit;
    char value;
};

void checkStable(Card A1[], Card A2[], int N){
    int stable_flg = 1;

    for (int i = 0; i < N; i++) {
        if (A1[i].suit != A2[i].suit) {
            stable_flg = 0;
        }
    }

    if (stable_flg) {
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
}

void printArray(Card A[], int N){
    for (int i = 0; i < N; i++) {
        cout << A[i].suit << A[i].value;
        if(i != N-1){
            cout << " ";
        }
    }
    cout << endl;
}

void bubbleSort(Card A[], int N){
    int flag = 1;
    int cnt = 0;
    while (flag) {
        flag = 0;
        for (int j = N-1; j > 0; j--) {
            if (A[j].value < A[j-1].value) {
                swap(A[j], A[j-1]);
                flag = 1;
                cnt++;
            }
        }
    }
    
}

void selectionSort(Card A[], int N){
    int flag = 0;
    int cnt = 0;
    int minj;
    for (int i=0; i<N; i++) {
        minj = i;
        flag = 0;
        for (int j=i; j<N; j++) {
            if (A[minj].value > A[j].value) {
                minj = j;
                flag = 1;
            }
            
        }
        if (flag)cnt++;
        
        swap(A[minj], A[i]);
    }
}



int main(int argc, const char * argv[]) {
    int n;
    Card C1[100], C2[100], C3[100], C4[100];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> C1[i].suit >> C1[i].value;
        C2[i] = C1[i];
    }

    
    bubbleSort(C1, n);
    selectionSort(C2,n);
    printArray(C1, n);
    cout << "Stable" << endl;
    printArray(C2, n);
    checkStable(C1, C2, n);
    return 0;
}