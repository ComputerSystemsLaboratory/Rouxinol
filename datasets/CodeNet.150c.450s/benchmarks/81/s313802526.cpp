#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<((x))<<endl
#define fi first
#define se second

#define INF 147483600

int d[10][10];
bool exist[10];

int main(){
  int n;
  while(cin>>n ,n){
    fill(d[0], d[10], INF);
    fill(exist, exist+10, false);
    rep(i,10) d[i][i]=0;
    rep(i,n){
      int a,b,c;
      scanf("%d %d %d", &a, &b, &c);
      d[a][b]=c;
      d[b][a]=c;
      exist[a]=true;
      exist[b]=true;
    }

    rep(k,10) rep(i,10) rep(j,10) d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

    int res=0;
    int best=INF;
    rep(i,10) if(exist[i]){
      int tmp=0;
      rep(j,10) if(exist[j]) tmp += d[i][j];
      if(tmp < best){
        best = tmp;
        res = i;
      }
    }

    printf("%d %d\n", res, best);
  }
  return 0;
}