#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>
#include<numeric>
#include<cassert>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define rep(i,s,n) for(int i=(s); i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x)

using namespace std;

typedef unsigned int uint;
typedef long long ll;

const int _dx[] = {0,1,0,-1};
const int _dy[] = {-1,0,1,0};

int getInt(){
  int ret = 0,c;
  c = getchar();
  while(!isdigit(c)) c = getchar();
  while(isdigit(c)){
    ret *= 10;
    ret += c - '0';
    c = getchar();
  }
  return ret;
}

int main(){
  int n,m;
  while(n = getInt(), m = getInt(), n+m){
    vector<pair<int,int> > d(n);
    REP(i,n){
      d[i].s = getInt();
      d[i].f = getInt();
    }
    sort(d.rbegin(), d.rend());
    REP(i,n){
      if(m > 0){
        if(d[i].s > m){
          d[i].s -= m;
          m = 0;
        }else{
          m -= d[i].s;
          d[i].s = 0;
        }
      }
    }
    long long ans = 0;
    REP(i,n)
      ans += d[i].f * d[i].s;
    printf("%lld\n",ans);
  }
  return 0;
}