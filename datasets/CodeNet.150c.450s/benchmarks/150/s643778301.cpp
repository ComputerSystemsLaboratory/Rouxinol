#include <iostream>
#define MAX  10000
using namespace std;

int n;

void countingSort(short A[], short B[], int k)
{
    int C[k+1];
    for(int i = 0; i <= k; i++){
        C[i] = 0;
    }
    for (int j = 1; j <= n; j++){
        C[A[j]] += 1;
    }
    for (int i = 1; i <= k; i++){
        C[i] += C[i-1];
    }

    for (int j = 1; j <= n; j++ ){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
        
    }
    
}

int main()
{
    int k = MAX;
    
    cin >> n;
    short A[n+1], B[n+1];
    
    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }

    countingSort(A, B, k);
    for (int i = 1; i <= n; i++){
        if(i > 1) cout << " ";
        cout << B[i];
        
    }
    cout << endl;
    
    return 0;
}