#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int f(int i,int j,vector<int> D){
  if(i==0) return D[j];
  return D[j]-D[i-1];
}
int solve(vector<int>& h,vector<int>& w){
  int n = h.size();
  int m = w.size();
  map<int,int> tbl;
  vector<int> H(n),W(m);
  H[0] = h[0];
  W[0] = w[0];
  for(int i=1;i<n;++i) H[i]=H[i-1]+h[i];
  for(int i=1;i<m;++i) W[i]=W[i-1]+w[i];
  for(int i=0;i<n;++i)
    for(int j=i;j<n;++j)
      tbl[f(i,j,H)]++;

  int ans=0;
  for(int i=0;i<m;++i)
    for(int j=i;j<m;++j)
      ans+=tbl[f(i,j,W)];

  return ans;
}
int main(){
  int n,m;
  while(cin>>n>>m,n||m){
    vector<int> h(n),w(m);
    for(int i=0;i<n;++i) cin >> h[i];
    for(int i=0;i<m;++i) cin >> w[i];
    cout<<solve(h,w)<<endl;
  }
  return 0;
}