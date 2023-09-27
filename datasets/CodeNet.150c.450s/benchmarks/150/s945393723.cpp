#include<iostream>
#include<cstdio>
using namespace std;
int n;
void Counting_Sort(int A[],int B[],int k){
  int *C = new int[k+1];
  for(int i=0;i<=k;i++)C[i]=0;
  for(int j=1;j<=n;j++)C[A[j]] = C[A[j]] + 1;
  for(int i=1;i<=k;i++)C[i]=C[i]+C[i-1];
  for(int j=n;j>=1;j--){
    B[C[A[j]]] = A[j];
    C[A[j]] = C[A[j]]-1;
  }
  delete [] C;
}

int main(){
  while(scanf("%d",&n) != EOF){
    int k=0;
    int *A = new int[n+2];
    int *B = new int[n+2];
    for(int i=1;i<=n;i++){
      scanf("%d",&A[i]);
      if(k<A[i])k=A[i];
    }
    Counting_Sort(A,B,k);

    for(int i=1;i<=n;i++){

      cout << B[i];

      if(i != n)cout << " ";

    }
    cout << endl;
    delete [] A;
    delete [] B;

  }

  return 0;

}