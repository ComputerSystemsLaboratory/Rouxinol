#include <iostream>
#define INF 1e9
using namespace std;
int cnt;

void merge(int A[],int L,int M,int R){
  int n1=M-L;
  int n2=R-M;
  int a[500000],b[500000];
  for(int i=0;i<n1;i++)a[i]=A[L+i];
  for(int i=0;i<n2;i++)b[i]=A[M+i];
  a[n1]=INF,b[n2]=INF;
  int i=0,j=0;

  for(int k=L;k<R;k++){
    cnt++;
    if(a[i]<=b[j]) A[k]=a[i++];
    else A[k]=b[j++];
  }
}

void mergeSort(int A[],int L,int R){
  if(L+1<R){
    int M=(L+R)/2;
    mergeSort(A,L,M);
    mergeSort(A,M,R);
    merge(A,L,M,R);
  }
}

int main(){
  int n, a[500000];
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  mergeSort(a,0,n);
 
  for(int i=0;i<n-1;i++)cout <<a[i]<<" ";
  cout <<a[n-1]<<endl;
  cout <<cnt<<endl;
  return 0;
}