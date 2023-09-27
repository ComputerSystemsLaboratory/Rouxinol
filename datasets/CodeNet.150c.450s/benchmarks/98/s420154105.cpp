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

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main(){
  int n,m;
  while(scanf("%d%d",&n,&m), n+m){
    int a[n], b[m];
    REP(i,n) scanf("%d",a+i);
    REP(i,m) scanf("%d",b+i);

    int suma = accumulate(a, a+n, 0);
    int sumb = accumulate(b, b+m, 0);
    int diff = suma - sumb;

    int ansa = -1;
    int ansb = -1;
    REP(i,n) REP(j,m){
      if(diff == 2*(a[i] - b[j])){
        if((ansa == -1) || (ansa + ansb > a[i] + b[j])){
          ansa = a[i];
          ansb = b[j];
        }
      }
    }

    if(ansa == -1) puts("-1");
    else printf("%d %d\n",ansa,ansb);

  }
  return 0;
}