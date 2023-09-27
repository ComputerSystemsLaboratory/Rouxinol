#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define F first
#define S second
#define INF 1 << 30

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int N, M;

bool cmp(const pi &a, const pi &b){
  return a.S > b.S;
}

int main(){
  int D, P;
  while(scanf("%d%d", &N, &M) && N+M){
    vector<pi>p(N);
    ll res = 0;
    rep(i, N){
      scanf("%d%d", &D, &P);
      p[i] = make_pair(D, P);
      res += D*P;
    }

    sort(p.begin(), p.end(), cmp);

    rep(i, N){
      //      printf("%lld %d %d\n", res, p[i].F, p[i].S);
      if(p[i].F >= M){
	res -= M * p[i].S;
	M = 0;
      }else{
	res -= p[i].F * p[i].S;
	M -= p[i].F;
      }
      if(M == 0) break;
    }
    printf("%lld\n", res);
  }
  return 0;
}