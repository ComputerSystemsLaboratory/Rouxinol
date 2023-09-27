#include <iostream>
#include <algorithm>
using namespace std;

struct card{
    char suit;
    int value;
};

void bubbleSort(card c[], int n);
void selectionSort(card c[], int n);
bool isSame(card A[], card B[], int n);

int main() {
    int n;
    cin >> n;
    card A[n], B[n];
    
    for(int i=0;i<n;i++){
        cin >> A[i].suit >> A[i].value;
        B[i] = A[i];
    }
    bubbleSort(A, n);
    selectionSort(B, n);
    
    for(int i=0; i<n; i++){
        cout << A[i].suit << A[i].value;
        if (i<n-1){
            cout << " ";
        }
    }
    cout << endl << "Stable" << endl;
    
    for(int i=0; i<n; i++){
        cout << B[i].suit << B[i].value;
        if (i<n-1){
            cout << " ";
        }
    }
    if (isSame(A, B, n)){
        cout << endl << "Stable" << endl;
    }else{
        cout << endl << "Not stable" << endl;
    }
    return 0;
}// End of main

void bubbleSort(struct card C[], int n){
    bool flag = true;
    int i,j;
    i = 0;
    card temp;
    while (flag) {
        flag = false;
        for (j = n-1; j>i; j--){
            if (C[j].value < C[j-1].value){
                temp = C[j];
                C[j].value = C[j-1].value;
                C[j].suit = C[j-1].suit;
                C[j-1] = temp;
                flag = true;
            }
        }
        i++;
    }//End of while
}// End of bubble sort

void selectionSort(card C[], int n){
    int min;
    card temp;
    for (int i = 0; i<n; i++){
        min = i;
        for (int j = i; j<n; j++){
            if (C[j].value < C[min].value){
                min = j;
            }
        }
        temp = C[i];
        C[i] = C[min];
        C[min] = temp;
    }
}

bool isSame(card A[], card B[], int n){
    for(int i=0; i<n; i++){
        if (A[i].suit != B[i].suit){
            return false;
        }
    }
    return true;
}