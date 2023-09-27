#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000



int main(){
  while(true){
    int n;
    scanf("%d", &n);
    if(n==0) break;
    if(n==1){
      cout << "1 1" << endl;
      continue;
    }

    vector<pii> p(n);
    p[0]=mp(0,0);
    int minW=0, maxW=0, minH=0, maxH=0;

    int dx[]={-1,0,1,0}, dy[]={0,-1,0,1};
    rep(i,n-1){
      int ni, di;
      scanf("%d %d", &ni, &di);
      int nx=p[ni].first+dx[di];
      int ny=p[ni].second+dy[di];
      p[i+1]=mp(nx,ny);
      minW=min(minW,nx);
      maxW=max(maxW,nx);
      minH=min(minH,ny);
      maxH=max(maxH,ny);
    }
    cout << maxW-minW+1 << " " << maxH-minH+1 << endl;

  }
}