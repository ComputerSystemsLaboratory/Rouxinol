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
#include <set>
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

int main() {
	while(true) {
		int n;
		cin >> n;
		if(n == 0) break;

		vector<pii> vp;
		rep(i,0,n) {
			int h,m,s;
			scanf("%d:%d:%d", &h, &m, &s);
			vp.push_back(pii(h*3600 + m*60 + s, 1));
			scanf("%d:%d:%d", &h, &m, &s);
			vp.push_back(pii(h*3600 + m*60 + s, -1));
		}

		sort(vp.begin(), vp.end());

		int ans = 0, tmp = 0;
		rep(i,0,vp.size()) {
			tmp += vp[i].second;
			ans = max(ans, tmp);
		}
		cout << ans << endl;
	}
}