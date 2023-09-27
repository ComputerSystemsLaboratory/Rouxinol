#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>
#include <fstream>


using namespace std;
const int MOD = 1000000009; // check!!!
const int INF = 100000000; //1e8

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;

#define FOR(i,n) for(int i = 0; i < (n); i++)
#define sz(c) ((int)(c).size())
#define ten(x) ((int)1e##x)
#define tenll(x) ((ll)1e##x)

bool b[21][21];

int main(){

	int n;
	while(cin>>n,n){
		memset(b,0,sizeof(b));
		FOR(i,n){
			int x,y; cin>>x>>y;
			b[y][x] = true;
		}
		int sx = 10,sy = 10;
		int m; cin>>m;
		FOR(i,m){
			string s;int p; cin>>s>>p;
			static int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};
			int dir;
			if(s[0] == 'N') dir = 0;
			else if(s[0] == 'E') dir = 1;
			else if(s[0] == 'S') dir = 2;
			else dir = 3;
			if(b[sy][sx]) b[sy][sx] = false,n--;
			FOR(i,p){
				sx += dx[dir],sy += dy[dir];
				if(b[sy][sx]) b[sy][sx] = false,n--;
			}
		}
		puts(n==0?"Yes":"No");
	}
	return 0;
}