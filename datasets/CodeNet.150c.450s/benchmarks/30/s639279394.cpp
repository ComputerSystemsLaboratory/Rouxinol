#include<bits/stdc++.h>
using namespace std;

int selectionSort(int A[], int N){
    int mini, minj;
    int sw = 0;
    for (int i = 0; i < N; i++){
        minj = i;
        for (int j = i; j < N; j++){
            if (A[j] < A[minj]) {minj = j;}
        }
        swap(A[i], A[minj]);
        if (minj != i) sw++;
    }
    return sw;
}

int main(){
    int N;
    int A[110];
    int sw;
    cin >> N;
    for (int i = 0; i < N; i++){ cin >> A[i]; }
    
    sw = selectionSort(A, N);
    for (int i = 0; i < N; i++){
        if(i){cout << " ";}
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;
    return 0;
}
    
            
