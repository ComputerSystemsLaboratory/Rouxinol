#include <iostream>
using namespace std;

int n;
int C[10000];

int CountingSort(int A[],int B[],int k){
    for (int i=0; i<k+1; i++) {
        C[i]=0;
    }
    for (int j=1; j<n+1; j++) {
        C[A[j]]++;
    }
    for (int i=1; i<k+1; i++) {
        C[i]=C[i]+C[i-1];
    }
    for (int j=n; j>0; j--) {
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }
    return 0;
}

int main(){
    cin>>n;
    int A[n];
    int B[n];
    int k=0;
    for (int i=1; i<n+1; i++) {
        cin>>A[i];
        B[i]=A[i];
        k=max(k, A[i]);
    }
    CountingSort(A, B, k);
    for (int i=1; i<n; i++) {
        cout<<B[i]<<" ";
    }
    cout<<B[n]<<endl;
}
