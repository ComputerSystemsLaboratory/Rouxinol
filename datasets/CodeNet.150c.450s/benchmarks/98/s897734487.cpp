#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

#define REP(i,a,n) for(int i = a; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int n,m;
int sumT,sumS;
int t[102],s[102];

void solve(){
  sort(t,t+n);
  sort(s,s+m);

  int ti = 0, si = 0;

  while(ti < n && si < m){
    int st = sumT - t[ti] + s[si];
    int ss = sumS - s[si] + t[ti];
    if(st == ss){
      cout<<t[ti]<<" "<<s[si]<<endl;
      return;
    }

    if(si + 1 >= m || ss < st && ti + 1 < n){//if(si + 1 >= m || (ti + 1 < n && t[ti] < s[si])){
      ti++;
    }
    else{
      si++;
    }
  }

  cout<<-1<<endl;
}

int main(){
  while(cin>>n>>m,n||m){
    sumT = sumS = 0;
    rep(i,n){
      cin>>t[i];
      sumT += t[i];
    }
    rep(i,m){
      cin>>s[i];
      sumS += s[i];
    }
    solve();
  }
}