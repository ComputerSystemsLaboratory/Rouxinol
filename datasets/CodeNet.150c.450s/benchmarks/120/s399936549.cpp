#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef vector<string> vs;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int s[10][10000];
int r,c;

int dfs(int i) {
	if(i == r) {
		int cnt, num=0;
		rep(k,0,c) {
			cnt = 0;
			rep(j,0,r) if(s[j][k] == 1) cnt++;
			if(cnt > r/2) num += cnt;
			else num += r-cnt;
		}
		return num;
	}

	int ans = -1;
	ans = max(ans, dfs(i+1));
	rep(j,0,c)
		if(s[i][j] == 0) s[i][j] = 1;
		else s[i][j] = 0;
	ans = max(ans, dfs(i+1));

	return ans;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(1) {
		cin >> r >> c;
		if(r == 0 && c == 0) break;
		rep(i,0,r)
			rep(j,0,c)
				cin >> s[i][j];
		cout << dfs(0) << endl;
	}

	return 0;
}