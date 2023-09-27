#include<bits/stdc++.h>
#define INF 1234567890
using namespace std;
int partition(int *A,char *B,int p,int r){
  int x=A[r];
  int i=p-1;
  for(int j=p;j<r;j++){
    if(A[j]<=x){
      i++;
      swap(A[i],A[j]);
      swap(B[i],B[j]);
    }
  }
  swap(A[i+1],A[r]);
  swap(B[i+1],B[r]);
  return i+1;
}
void quicksort(int *A,char *B,int p,int r){
  if(p<r){
    int q=partition(A,B,p,r);
    quicksort(A,B,p,q-1);
    quicksort(A,B,q+1,r);
  }
}
void merge(int *a,char *b,int l,int m,int r){
  int n1 = m - l;
  int n2 = r - m;
  vector<int> L(n1+1);
  vector<int> R(n2+1);
  vector<int> Lb(n1+1);
  vector<int> Rb(n2+1);
  for(int i=0;i<n1;i++){
    L[i]=a[l+i];
    Lb[i]=b[l+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=a[m+i];
    Rb[i]=b[m+i];
  }
  L[n1]=INF;
  R[n2]=INF;
  int i=0;
  int j=0;
  for(int k=l;k<r;k++){
    if(L[i]<=R[j]){
      a[k]=L[i];
      b[k]=Lb[i];
      i++;
    }
    else{
      a[k]=R[j];
      b[k]=Rb[j];
      j++;
    }
    //  cou++;
  }
}
 
void mergesort(int *a,char *b,int l,int r){
  if(l+1<r){
    int m=(l+r)/2;
    mergesort(a,b,l,m);
    mergesort(a,b,m,r);
    merge(a,b,l,m,r);
  }
}
 
int main(){
  int n;
  cin >> n;
  int ai[100005],bi[100005];
  char ac[100005],bc[100005];
  for(int i=0;i<n;i++){
    cin >> ac[i]>> ai[i];
    bc[i]=ac[i];
    bi[i]=ai[i];
  }
  mergesort(ai,ac,0,n);
  quicksort(bi,bc,0,n-1);
  int f=0;
  for(int i=0;i<n;i++){
    if(ac[i]!=bc[i]){
      f=1;
      break;
    }
  }
  if(!f)cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i=0;i<n;i++){
    cout << bc[i] << " " << bi[i] << endl;
  }
  return 0;
}