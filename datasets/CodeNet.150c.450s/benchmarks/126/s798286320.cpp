#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x);
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))

const int INF = 1000000000;
const double EPS = 1e-8;
const double PI = 3.14159;
int dx[4]={-1, 0, 1, 0}, dy[4]={0, -1, 0, 1};
using namespace std;
typedef pair<int, int> P;

/** Problem0515 : School Road **/
int W, H;
int N;
vector<P> b;
int dp[16][16];

int solve(int x, int y)
{
	if (x==W-1 && y==H-1)
		return 1;
	else if (x>=W || y>=H)
		return 0;
	
	
	if (dp[x][y] != -1)
		return dp[x][y];
	
	int res=0;
	vector<P>::iterator it = find(b.begin(), b.end(), P(x+1, y));
	if (it == b.end())
		res += solve(x+1, y);
	
	it = find(b.begin(), b.end(), P(x, y+1));
	if (it == b.end())
		res += solve(x, y+1);
	
	return dp[x][y] = res;
}

int main()
{
	while (cin>>W>>H, W||H) {
		cin>>N;
		b.resize(N);
		memset(dp, -1, sizeof(dp));
		
		rep(i, N) {
			cin>>b[i].first>>b[i].second;
			b[i].first--, b[i].second--;
		}
		cout << solve(0, 0) << endl;
	}
}