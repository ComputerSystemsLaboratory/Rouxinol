#include<iostream>
using namespace std;
#define MAX 10000

int A[2000000], B[2000000];
int C[MAX] = {0};

void CountingSort(int A[], int B[], int k){
    for(int i = 0; i < k; i++) C[A[i]]++;
    
    for(int i = 1; i <= MAX; i++) C[i] = C[i] + C[i - 1];
    
    for(int i = 0; i < k; i++){
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
}

int main(){
    int n;
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    
    CountingSort(A, B, n);
    
    for(int i = 1; i <= n; i++){
        if(i > 1) cout << " ";
        cout << B[i];
    }
    cout << endl;
    
    return 0;
}
