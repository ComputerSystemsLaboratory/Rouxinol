#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000

int solve2(int xy){
  int y=0;
  int ans=INF;
  while(y*y<=xy){
    ans=min(ans, y + xy-y*y);
    y++;
  }
  return ans;
}

void solve(int e){
  int z=0;
  int ans=INF;
  while(z*z*z<=e){
    ans = min(ans, z+solve2(e-z*z*z));
    z++;
  }
  cout << ans << endl;
}

int main(){
  while(true){
    int e;
    scanf("%d", &e);
    if(e==0) break;
    solve(e);
  }
}