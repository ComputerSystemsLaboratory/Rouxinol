#include <iostream>

using namespace std;

void countingSort(int *A, int n, int *B, int k){
    int i, j, C[k];

    for(i = 0; i <= k; i++) C[i] = 0;

    for(j = 1; j <= n; j++) C[A[j]]++;
    
    for(i = 1; i <= k; i++) C[i] += C[i-1];

    for(j = n; j >= 1; j--){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    
}

int main(){
    int n, k = 0, i;
    cin >> n;
    int A[n+1], B[n+1];
    for(i = 1; i <= n; i++) {
        cin >> A[i];
        if(A[i] > k) k = A[i];
    }
    countingSort(A, n, B, k);
    for(i = 1; i < n; i++) cout << B[i] << " ";
    cout << B[i] << endl;
    return 0;
}
