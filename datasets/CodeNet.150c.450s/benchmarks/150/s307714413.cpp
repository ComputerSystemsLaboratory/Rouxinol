#include <bits/stdc++.h>
using namespace std;

int main(){
    int *A, *B;
    int VMAX = 10000;
    int MAX = 2000001;
    vector<int> C(VMAX+1);
    int n;
    cin >> n;
    A = new int[n+1];  
    B = new int[n+1];    
    for (int i = 0; i <= VMAX; i++) C[i] = 0;
    for (int i = 0; i < n; i++){
        cin >> A[i+1];
        C[A[i+1]]++;
    }
    for (int i = 1; i <= VMAX; i++) C[i] = C[i] + C[i-1];
    for (int j = 1; j <= n; j++) {
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    
    for (int i = 1; i <= n; i++){
        if (i > 1)  cout << " ";
        cout << B[i];
    }
    cout << endl;
    return 0;
}

