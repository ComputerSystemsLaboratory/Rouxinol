#include <cstdio>
#include <algorithm>
#include <iostream>
#define rep(i,n) for(int i=0; i<(n); i++)
#define INF 10000
#define dm(x) cerr << #x << " = " << x << endl;
using namespace std;

int main()
{
  int n, d[10][10], city, s[10], ms, mc;
  while(scanf("%d",&n),n){
    city=0;

    rep(i,10) rep(j,10)
      if (i==j) d[i][j]=0;
      else d[i][j]= INF;
    
    rep(i,n) {
      int a,b,c;
      scanf("%d %d %d", &a, &b, &c);
      d[a][b]=c;
      d[b][a]=c;
      city = max(max(a,b),city);
    }

    rep(k,10) rep(i,10) rep(j,10){
      d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
    }
    
    // rep(i,city+1) rep(j,city+1)
    //   printf("%d %d: %d\n", i,j,d[i][j]);

    ms=-1;mc=INF;
    rep(i,city){
      s[i]=0;
      rep(j,city+1)
        s[i]+=d[i][j];
      if(s[i] < mc) {
        ms = i;
        mc = s[i];
      }
    }
    
    printf("%d %d\n", ms, mc);
  }
}