#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define FOR(i,a,b) for(int i=(a);i<(b);++(i))
#define REP(i,n) FOR(i,0,n)

#define dump(x) cerr << #x << " = " <<(x)<<endl;
#define debug(x) cerr << #x << " = " <<(x) << "(L" << __LINE__ << ")" << __FILE__ << endl;

using namespace std;

#define MAX 500000
#define SENTINEL 2000000000

int L[MAX/2+2], R[MAX/2+2];
int cnt;

void merge(int* A, int n, int left, int mid, int right){
  int n1=mid-left;
  int n2 =right-mid;
  REP(i,n1) L[i]=A[left+i];
  REP(i,n2) R[i]=A[mid+i];
  L[n1] =R[n2] = SENTINEL;
  int i=0;
  int j=0;
  for(int k=left; k<right;k++){
    cnt++;
    if(L[i]<=R[j]){
      A[k] =L[i++];
    } else{
      A[k]=R[j++];
    }
  }
}

void merge_sort(int* A, int n,int left, int right){
  if(left+1<right){
    int mid= (left+right) >> 1;
    merge_sort(A,n,left,mid);
    merge_sort(A,n,mid,right);
    merge(A,n,left,mid,right);
  }
}


int main(void){
  int A[MAX],n,i;
  cnt =0;
  cin >> n;
  REP(i,n)cin >> A[i];
  merge_sort(A,n,0,n);
  FOR(i,0,n) {
    if(i)cout<<" ";
    cout <<A[i];
  }cout << endl;
  cout << cnt << endl;
  return 0;
}