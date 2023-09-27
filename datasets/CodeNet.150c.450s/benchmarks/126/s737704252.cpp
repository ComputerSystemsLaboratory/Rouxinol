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

#define INF 2147483600
#define long long long

int main(){
  int h,w;
  while(cin>>h>>w, h|w){
    int n; cin>>n;
    vector<vector<int> > vec(h, vector<int>(w, 0));
    rep(i,n){
      int x,y;
      scanf("%d %d", &x, &y);
      x--;y--;
      vec[x][y] = -1;
    }
    vec[0][0]=1;
    repl(i,1,w) if(vec[0][i]!=-1) vec[0][i] = vec[0][i-1];
    repl(i,1,h) if(vec[i][0]!=-1) vec[i][0] = vec[i-1][0];

    repl(i,1,h) repl(j,1,w) if(vec[i][j]!=-1){
      if(vec[i-1][j]!=-1) vec[i][j] += vec[i-1][j];
      if(vec[i][j-1]!=-1) vec[i][j] += vec[i][j-1];
    }
    cout<<vec[h-1][w-1]<<endl;
  }

  return 0;
}