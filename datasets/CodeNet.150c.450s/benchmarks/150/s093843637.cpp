#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define MAX 114514
using std::cout;
using std::cin;
using std::endl;

void countingSort(int *A, int *B, int n, int k){
  int C[MAX];
  for(int i=0;i<=k;i++) C[i]=0;
  for(int i=0;i<n;i++) C[A[i]]++;
  for(int i=1;i<=k+1;i++) C[i]=C[i]+C[i-1];     
  for(int j=n-1;j>=0;j--){
    B[C[A[j]]]=A[j];    C[A[j]]--;
  }
  for(int i=1;i<=n;i++){
    if(i-1) cout << " ";
    cout << B[i];
  }
  cout << endl;
}

int main(){
  int n,max=0;
  cin >> n;
  int a[n],b[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(max<a[i]) max=a[i];
    b[i]=0;
  }
  countingSort(a,b,n,max);
  return 0;
}
