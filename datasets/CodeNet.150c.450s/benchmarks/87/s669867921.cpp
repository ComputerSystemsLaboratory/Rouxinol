#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<queue>
#include<stack>
#include<bitset>
#include<functional>
#include<map>
#include<unordered_set>
using namespace std;
/*int p = 998244353;*/
int p = 1000000007;
#define int long long
#define vel vector<long long>
#define vvel vector<vel>
#define rep(i,n) for(int i=0;i<n;i++)
#define sor(v) sort(v.begin(),v.end())
#define mmax(a,b) a=max(a,b)
#define mmin(a,b) a=min(a,b)
#define mkp make_pair
#define pin pair<int,int>
#define qin pair<pin,int>
#define V vector
#define Endl endl
#define veb vector<bool>
#define sq(a) (a)*(a)
#define rev(s) reverse(s.begin(),s.end())
#define end_pr(s) cout << s <<endl;return 0
#define itn int
int RE() {
	vel v(3, 2);
	return v.at(4);
}
int ru(int a, int r) {
	if (r == 0) { return 1; }
	int ans = ru(a, r / 2);
	ans *= ans; ans %= p;
	if (r % 2 == 1) { ans *= a; }
	return ans % p;
}
int inv(int a) {
	return ru(a,p - 2);
}
vel dis(int mid1, vvel &way) {
	int n = way.size();
	vel dist(n, -1); dist[mid1] = 0;
	queue<int> q;
	q.push(mid1);
	while (!q.empty()) {
		int st = q.front(); q.pop();
		rep(i, way[st].size()) {
			int to = way[st][i];
			if (dist[to] == -1) {
				dist[to] = dist[st] + 1;
				q.push(to);
			}
		}
	}
	return dist;
}
pin most_far(int now, int n, vvel &way) {
	vel dist1 = dis(now, way);
	pin ans = mkp(-1, 0);
	rep(i, n) {
		if (dist1[i] > ans.first) { ans = mkp(dist1[i], i); }
	}
	return ans;
}

template<typename T>
V<T> uni(V<T> &v) {
	if (v.size() == 0) { return v; }
	sor(v);
	V<T> ans(1, v[0]);
	for (int i = 1; i < v.size(); i++) {
		if (v[i] != v[i - 1]) { ans.push_back(v[i]); }
	}
	v = ans;
	return v;
}
int s_gcd(int a, int b) {
	if (b == 0) { return a; }
	return s_gcd(b, a%b);
}
int gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	if (a < b) { swap(a, b); }
	return s_gcd(a, b);
}
vel dx{ 1,1,0,0,-1,-1 };
vel dy{ 0,1,1,-1,-1,0 };
signed main() {
	while (true) {
		int h; cin >> h;
		if (h == 0) { break; }
		int ans = 0;
		vvel pla(h, vel(5));
		rep(i, h) {
			rep(j, 5) { cin >> pla[i][j]; }
		}
		rev(pla);
		while (true) {
			int diff = 0;
			rep(i, h) {
				if (pla[i][2] != -1) {
					int count = 1;
					if (pla[i][1] == pla[i][2]) {
						count++;
						if (pla[i][0] == pla[i][2]) { count++; }
					}
					if (pla[i][3] == pla[i][2]) {
						count++;
						if (pla[i][4] == pla[i][2]) { count++; }
					}
					if (count >= 3) {
						diff += pla[i][2] * count;
						if (pla[i][1] == pla[i][2]) {
							pla[i][1] = -1;
							if (pla[i][0] == pla[i][2]) { pla[i][0] = -1;; }
						}
						if (pla[i][3] == pla[i][2]) {
							pla[i][3] = -1;
							if (pla[i][4] == pla[i][2]) { pla[i][4] = -1; }
						}
						pla[i][2] = -1;
					}
				}
			}
			if (diff == 0) { break; }
			rep(i, 5) {
				int back = 0;
				rep(j, h) {
					if (pla[j][i] != -1) {
						pla[back][i] = pla[j][i];
						back++;
					}
				}
				for (int j = back; j < h; j++) { pla[j][i] = -1; }
			}
			ans += diff;
		}
		cout << ans << endl;
	}
}
