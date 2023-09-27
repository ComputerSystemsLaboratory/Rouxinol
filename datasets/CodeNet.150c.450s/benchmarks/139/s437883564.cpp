#include <bits/stdc++.h>  
using namespace std;
using ll = long long int;
using pii = pair<int, int>;
#define rep(i,n) for(ll i=0; i<(ll)(n); i++)
using graph = vector<vector<int>>;

int main() {
  int n,m; cin>>n>>m;
  graph v(n+1);
  int a,b;
  rep(i,m){
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  vector<int> vec(n+1,0);
  set<int> s{1};
  rep(i,n){
    if(i==0){continue;}
    set<int>s_=s;
    s.clear();
    for(int j:s_){ 
      for(int k:v[j]){
        if(vec[k]==0){
          vec[k]=j;
          s.insert(k);
        }
      }
    }
  }
  
  if(count(vec.begin()+2,vec.end(),0)!=0){
    cout<<"No";
  }
  else{
    cout<<"Yes"<<endl;
    rep(i,n+1){
      if(i<=1){continue;}
      cout<<vec[i]<<endl;
    }
  }
}