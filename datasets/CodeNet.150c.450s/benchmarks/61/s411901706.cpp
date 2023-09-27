#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

#define MAX 1000001
int main(){
  int n,a,b,c,x;
  while(scanf("%d%d%d%d%d",&n,&a,&b,&c,&x), n){
    int y[n], yy = 0;
    REP(i,n) scanf("%d",&y[i]);
    int i;
    for(i=0; i<=10000; i++){
      if(y[yy] == x) yy++;
      x = (a*x + b) % c;
      if(yy == n) break;
    }
    if(i == 10001) i=-1;
    printf("%d\n",i);
  }
  return 0;
}