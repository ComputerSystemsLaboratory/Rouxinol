#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n);i++)
using ll = long long;
const ll MOD=1000000007;
const long long INF = 1LL << 60;
const double pi=acos(-1.0);

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

string s1,s2;
vector<vector<ll>> table;
ll dp(ll n1,ll n2){
  //cout<<n1<<" "<<n2<<endl;
  if(n1<0) return n2+1;
  if(n2<0) return n1+1;
  if(table.at(n1).at(n2)<INF) return table.at(n1).at(n2);
  
  table.at(n1).at(n2)--;
  if(s1.at(n1)==s2.at(n2)){
    chmin(table.at(n1).at(n2),dp(n1-1,n2-1));
    return table.at(n1).at(n2);
  }
  chmin(table.at(n1).at(n2),dp(n1-1,n2)+1);
  chmin(table.at(n1).at(n2),dp(n1,n2-1)+1);
  chmin(table.at(n1).at(n2),dp(n1-1,n2-1)+1);
  return table.at(n1).at(n2);
}

int main()
{
  cin>>s1>>s2;
  ll N1=s1.size(),N2=s2.size();
  //cout<<s1<<" "<<s2<<endl;
  table=vector<vector<ll>>(N1,vector<ll>(N2,INF));
  
  cout<<dp(N1-1,N2-1)<<endl;
  /*
  rep(i,N1){
    rep(j,N2){
      if(j!=0) cout<<" ";
      if(table.at(i).at(j)>1000) cout<<"L";
      else cout<<table.at(i).at(j);
    }
    cout<<endl;
  }
  */
  return 0;
}

