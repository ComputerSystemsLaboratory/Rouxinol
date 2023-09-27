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
#define ALL(v) (v).begin(), (v).end()
#define LENGTHOF(x) (sizeof(x) / sizeof(*(x)))
#define AFILL(a, b) fill((int*)a, (int*)(a + LENGTHOF(a)), b)
#define SQ(x) ((x)*(x))
#define Mod(x, mod) (((x)+(mod)%(mod))
#define MP make_pair
#define PB push_back
#define Fi first
#define Se second
#define INF (1<<29)
#define EPS 1e-10
#define MOD 1000000007

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int main(){
  int x,y,s;
  while(scanf("%d%d%d",&x,&y,&s) && x+y+s){
    int res = 0;
    map<int,int>m;
    for(int i=1;i*(100+x)/100 <= s;i++){
      int v = i*(100+x)/100;
      if(m.find(v) == m.end()) m[v] = i;
    }
    
    for(int i=1;i<s;i++){
      int j = s-i;
      res = max(res, m[i]*(100+y)/100 + m[j]*(100+y)/100);
    }
    cout << res << endl;
  }

  return 0;
}