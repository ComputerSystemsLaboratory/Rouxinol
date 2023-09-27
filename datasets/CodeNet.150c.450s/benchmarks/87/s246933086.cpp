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

int H;
int s[16][8];

int main(){
  while(cin >> H && H){
    rep(i,H) rep(j,5) cin >> s[i][j];
    int res = 0;
    int f = 1;
    while(f){
      f = 0;
      rep(i,H){
	int *n = &s[i][0];
	if(n[0]&&n[0]==n[1]&&n[1]==n[2]&&n[2]==n[3]&&n[3]==n[4]){
	  res += n[0]*5;
	  n[0]=n[1]=n[2]=n[3]=n[4]=0;
	  f = 1;
	}else if(n[0]&&n[0]==n[1]&&n[1]==n[2]&&n[2]==n[3]){
	  res += n[0]*4;
	  n[0]=n[1]=n[2]=n[3]=0;
	  f = 1;
	}else if(n[1]&&n[1]==n[2]&&n[2]==n[3]&&n[3]==n[4]){
	  res += n[1]*4;
	  n[1]=n[2]=n[3]=n[4]=0;
	  f = 1;
	}else if(n[0]&&n[0]==n[1]&&n[1]==n[2]){
	  res += n[0]*3;
	  n[0]=n[1]=n[2]=0;
	  f = 1;
	}else if(n[1]&&n[1]==n[2]&&n[2]==n[3]){
	  res += n[1]*3;
	  n[1]=n[2]=n[3]=0;
	  f = 1;
	}else if(n[2]&&n[2]==n[3]&&n[3]==n[4]){
	  res += n[2]*3;
	  n[2]=n[3]=n[4]=0;
	  f = 1;
	}
      }

      for(int i=H-1;i>=0;i--) rep(j,5){
	  if(s[i][j]) continue;
	  for(int k=i-1;k>=0;k--){
	    if(!s[k][j]) continue;
	    s[i][j] = s[k][j];
	    s[k][j] = 0;
	    break;
	  }
	}
    }    
    cout << res << endl;
  }
  return 0;
}