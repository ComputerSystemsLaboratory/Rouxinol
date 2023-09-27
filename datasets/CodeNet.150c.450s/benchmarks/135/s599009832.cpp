#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<(n);++i)
#define out(S) cout<<(S)<<endl;
#define ShowAll(collection) for(auto i:collection){out(i);}
#define beginend(v) v.begin(),v.end()

using pii=pair<int,int>;
using ll=long long;
using ull=unsigned long long;
using vi=vector<int>;
using vvi=vector<vi>;
using vvc=vector<vector<char>>;
using ti3=tuple<int,int,int>;
template<typename T> void removeAt(vector<T>& v, int index) { v.erase(v.begin() + index); }


int solve(int n,int m){
  vi w(m+1,0),h(n+1,0);
  rep(i,n) cin>>h[i+1];
  rep(i,m) cin>>w[i+1];

  rep(i,n) h[i+1]+=h[i];
  rep(i,m) w[i+1]+=w[i];


  map<int,int> hm,wm;
  rep(i,n+1) for(int j=i+1;j<=n;++j) hm[h[j]-h[i]]++;
  rep(i,m+1) for(int j=i+1;j<=m;++j) wm[w[j]-w[i]]++;


  int ans=0;
  rep(i,max(h[n],w[n])+1) ans+=(hm[i]*wm[i]);
  return ans;
}

int main(){
  int N,M;
  while(cin >> N >> M,N|M){
    out(solve(N,M));
  }
}

