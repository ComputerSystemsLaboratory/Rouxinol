#include <bits/stdc++.h>
#define N 500010
#define INF (1e9)+1
using namespace std;
int cnt;

void merge(int A[],int l,int m,int r){
  int n1 = m - l;
  int n2 = r - m;
  int L[N],R[N];
  for(int i=0;i<n1;i++) L[i] = A[l+i];
  for(int i=0;i<n2;i++) R[i] = A[m+i];
  L[n1] = R[n2] = INF;

  for(int k = l,i=0,j=0; k<r;k++){
    cnt++;
    if(L[i]<=R[j]) A[k] = L[i++];
    else A[k] = R[j++];
  }
}

void mergeSort(int A[],int l,int r){
  if(l+1 >= r) return;
  
  int m = (l+r)/2;
  mergeSort(A,l,m);
  mergeSort(A,m,r);
  merge(A,l,m,r);
}


int A[N];

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++) scanf("%d",&A[i]);

  mergeSort(A,0,n);

  for(int i=0;i<n;i++){
    if(i)printf(" ");
    printf("%d",A[i]);
  }
  cout<<endl<<cnt<<endl;
  return 0;
}