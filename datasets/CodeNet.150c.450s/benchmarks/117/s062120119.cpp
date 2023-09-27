#include <iostream>
using namespace std;

#define INF 1000000005
int ifcnt=0;
void merge(int *A,int l,int m,int r){
  int n1,n2,i,li,ri,L[300000],R[300000];
  n1=m-l;
  n2=r-m;
  for (i=l;i<m;i++) L[i-l]=A[i];
  for (i=m;i<r;i++) R[i-m]=A[i];
  L[n1]=INF;
  R[n2]=INF;
  li=0;
  ri=0;
  for (i=l;i<r;i++){
    if (L[li]<=R[ri]){
      A[i]=L[li];
      li++;
    }else{
      A[i]=R[ri];
      ri++;
    }
    ifcnt++;
  }
}

void mergeSort(int *A,int l,int r){
  int m;
  if (l+1<r){
    m=(l+r)/2;
    mergeSort(A,l,m);
    mergeSort(A,m,r);
    merge(A,l,m,r);
  }
}

int main(){
  int n,i,S[500005];

  cin >> n;

  for (i=0;i<n;i++) cin >> S[i];

  mergeSort(S,0,n);
  
  for (i=0;i<n;i++){
    cout << S[i];
    if (i<n-1) cout << " ";
  }
  
  cout << endl;
  cout << ifcnt << endl;

  return 0;
}