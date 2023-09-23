#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);i++)
#define LOOP(i,x,n) for(int i=(x);i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define int long long
using namespace std;
const int MOD=1e9+7;
const int INF=1e10;

int f(int n,int s,int m){
  int tmp=0;
  if(n==0&&s==0)return 1;
  LOOP(i,m,10)if(s-i>=0)tmp+=f(n-1,s-i,i+1);
  return tmp;
}

signed main(){
  int n,s;
  while(cin>>n>>s,n){
    cout<<f(n,s,0)<<endl;
  }
  return 0;
}

