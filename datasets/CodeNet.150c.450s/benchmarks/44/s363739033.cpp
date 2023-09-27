#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;
typedef vector<int> vi;

int hit(vi a,vi b){
  int res = 0;
  rep(i,4) if(a[i] == b[i]) res++;
  return res;
}

int blow(vi a,vi b){
  int res = 0;
  rep(i,4) rep(j,4) if(i != j && a[i] == b[j]){
    res++;
    break;
  }
  return res;
}

int main(){
  vi a(4),b(4);
  while(1){
    rep(i,4) if(!(cin>>a[i])) return 0;
    rep(i,4) cin>>b[i];
    cout<<hit(a,b)<<" "<<blow(a,b)<<endl;
  }
}