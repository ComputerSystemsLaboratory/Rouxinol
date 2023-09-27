#include <iostream>
using namespace std;
int A[2000005],B[2000005];

void CountingSort(int *A,int *B,int k,int n){
  int i,j,C[10005];

  for (i=0;i<=k;i++)
    C[i]=0;

  for (j=1;j<=n;j++)
    C[A[j]]++;

  for (i=1;i<=k;i++)
    C[i] += C[i-1];

  for (j=n;j>=1;j--){
    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }

}

int main(){
  int n,k=-1;

  cin >> n;
  for (int i=1;i<=n;i++){
    cin >> A[i];
    if (k<A[i]) k = A[i];
  }

  CountingSort(A,B,k,n);

  for (int i=1;i<=n;i++){
    cout << B[i];
    if (i<n) cout << " ";
    else cout << endl;
  }
  
  return 0;
}