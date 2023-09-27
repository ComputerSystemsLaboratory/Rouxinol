#include <iostream>
#define SENTINEL 1000000001;
using namespace std;

int comp = 0;

void merge(int S[], int left, int mid, int right){
  int nl = mid-left;
  int nr = right-mid;
  int L[nl+1],R[nr+1];
  L[nl] = SENTINEL; R[nr] = SENTINEL;

  for(int i=0;i<nl;i++) L[i]=S[left+i];
  for(int i=0;i<nr;i++) R[i]=S[mid+i];
  int il = 0;
  int ir = 0;
  int is = 0;
  for(int i=0;i<right-left;i++){
    comp++;
    if(L[il]<=R[ir]){
      S[left+is] = L[il];
      il++;
    }else if(L[il]>R[ir]){
      S[left+is] = R[ir];
      ir++;
    }
    is++;
  }
}

void merge_sort(int S[], int left, int right){
  int mid = (left+right)/2;
  if(left + 1 < right){
    merge_sort(S,left,mid);
    merge_sort(S,mid,right);
    merge(S,left,mid,right);
  }
}

int main(){
  int n; cin>>n;
  int S[n];
  for(int i=0;i<n;i++){
    cin>>S[i];
  }
  merge_sort(S,0,n);
  for(int i=0;i<n;i++){
    if(i) cout<<" ";
    cout<<S[i];
  }
  cout<<endl<<comp<<endl;
}