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
#include <map>
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

bool solve(int sq, int h){
  for(int nh=h+1; 2*nh*nh<sq; nh++){
    int nw=nh+1;
    while(nh*nh+nw*nw<sq) nw++;
    if(nh*nh+nw*nw==sq){
      cout << nh << " " << nw << endl;
      return true;
    }
  }
  return false;
}

int main(){
  int h,w;
  while(scanf("%d %d",&h, &w), h|w){
    int sq = h*h + w*w;

    while(!solve(sq, h)){
      sq++; h=0;
    }

  }
}