#include<bits/stdc++.h>
#define INF 1234567890
using namespace std;
int cou;
void merge(int *,int,int,int);
void mergesort(int *,int,int);
int main(){
  int n;
  int a[500005];
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];

  }
  mergesort(a,0,n);
  for(int i=0;i<n;i++){
    if(i)cout << " ";
    cout << a[i];

  }
  cout << endl;
  cout << cou << endl;
  return 0;
}

  
void merge(int *a,int l,int m,int r){
  int n1 = m - l;
  int n2 = r - m;
  vector<int> L(n1+1);
  vector<int> R(n2+1);
  for(int i=0;i<n1;i++){
    L[i]=a[l+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=a[m+i];
  }
  L[n1]=INF;
  R[n2]=INF;
  int i=0;
  int j=0;
  for(int k=l;k<r;k++){
    if(L[i]<=R[j]){
      a[k]=L[i];
      i++;
    }
    else{
      a[k]=R[j];
      j++;
    }
    cou ++;
  }
}

void mergesort(int *a,int l,int r){
  if(l+1<r){
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m,r);
    merge(a,l,m,r);
  }
}

  