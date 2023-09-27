#include<bits/stdc++.h>
using namespace std;
#define int long long
#define k 10001
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  vector<int> A(n),B(n);
  for(int i=0;i<n;i++) cin>>A[i];
  int C[k];
  for(int i=0;i<k;i++) C[i]=0;
  for(int j=0;j<n;j++) C[A[j]]++;
  for(int i=1;i<k;i++) C[i]=C[i]+C[i-1];
  for(int j=n-1;j>=0;j--){
    B[C[A[j]]-1]=A[j];
    C[A[j]]--;
  }
  for(int i=0;i<n;i++) cout<<B[i]<<" \n"[i==n-1];
  return 0;
}