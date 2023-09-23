#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

int partition(int A[],int p,int r){
  int x=A[r];
  int i = p-1;
  for(int j=p;j<r;j++){
    if(A[j]<=x){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1; 
    
}

int main(){
  
  int n;
  cin>>n;
  int A[n];
  rep(i,n) cin>>A[i];
  
  int i = partition(A,0,n-1);
  
  for(int j=0;j<i;j++){
    if(j)cout<<" ";
    cout<<A[j];
  }
  cout<<" ["<<A[i]<<"]";
  for(int j=i+1;j<n;j++){
    cout<<" "<<A[j];
  }
  cout<<endl;
  
  return 0;
}
