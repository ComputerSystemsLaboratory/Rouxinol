#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<map>
#include<string>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

typedef pair<double,pair<int,int> > pp;

#define MAX (10000000)

int main(){
  int n;
  while(scanf("%d",&n), n){
    int ct[10][10];
    int m = 0;
    REP(i,10) REP(j,10) ct[i][j] = (i==j?0:MAX);
    REP(i,n){
      int a,b,c;
      scanf("%d%d%d",&a,&b,&c);
      m = max(m, a); m = max(m, b);
      ct[a][b] = ct[b][a] = min(ct[a][b], c);
    }
    m++;

    REP(k,m) REP(i,m) REP(j,m)
      ct[i][j] = min(ct[i][j], ct[i][k]+ct[k][j]);

    int ans = -1;
    int d = INT_MAX;
    REP(i,m){
      int sum = 0;
      REP(j,m) sum+=ct[i][j];
      if(sum < d){
	ans = i;
	d = sum;
      }
    }

    printf("%d %d\n", ans, d);
  }
  return 0;
}