#include <bits/stdc++.h>

#define mp       make_pair
#define mt	 make_tuple
#define pb       push_back
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    pair<int,int>      pii;
typedef    pair<long,long>    pll;

const int INF=1<<29;
const double EPS=1e-9;
const int MOD = 100000007;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int x,y,s;
int main(){
  while (cin >> x >> y >> s){
    if (x == 0 && y == 0 && s == 0)break;
    int ans = 0;
    for (int i = 1; i < 1000; i++){
      for (int j = 1; j < 1000; j++){
	int px = i * (100 + x) / 100;
	int py = j * (100 + x) / 100;
	if (px + py == s){
	
	  int ppx = i * (100 + y) / 100;
	  int ppy = j * (100 + y) / 100;
	  ans = max(ans, ppx + ppy);
	}
      }
    }
    cout << ans << endl;
  }
}