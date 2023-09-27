#include <bits/stdc++.h>

#define rep(i, n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)

using namespace std;

int A[100001];

int partition(int p, int r){
  int i;
  i = p-1;

  REP(j, p, r){
    if(A[j] <= A[r]){
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  
  return i+1;
}


signed main(){
  int n;
  cin >> n;
  rep(i, n){
    cin >> A[i];
  }

  int ret = partition(0, n-1);
  
  rep(i, n){    
    if(i > 0) cout << " ";
    if(ret == i){
      cout << "[" << A[i] << "]";
    }else{
      cout << A[i];
    }
  }
  puts("");
}