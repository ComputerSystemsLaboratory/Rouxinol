#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int dp[100][100] = {{0}};
std::vector<int> r;
std::vector<int> c;
int N;

int dfs(int i, int j) {
	if (dp[i][j] != 0) {return dp[i][j];}
	if (j == i) {
		return 0;
	}
	if (j - i == 1) {
		return dp[i][j] = r[i] * c[i] * c[j];
	}
	int ans = 1000000000;
	for (int k = i; k < j; ++k) {
		ans = std::min(ans, dfs(i, k) + dfs(k + 1, j) + r[i] * c[k] * c[j]);
	}
	return dp[i][j] = ans;
}

int main(int argc, char const *argv[]) {
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int a, b;
		cin >> a >> b;
		r.push_back(a);
		c.push_back(b);
	}
	int ans = dfs(0, N - 1);
	cout << ans << endl;

	return 0;
}