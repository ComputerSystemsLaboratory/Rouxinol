#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
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
typedef queue< pair<int, int> > qpii;
typedef vector<int> vi;
typedef vector<int, int> vii;
typedef vector<string> vs;
typedef vector< pair<int, int> > vpii;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

struct pro {
	int q;
	string name;
};

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	queue<struct pro> que;
	int n, q0;
	int ans = 0;

	cin >> n >> q0;
	rep(i,0,n) {
		int qtmp;
		string ntmp;
		cin >> ntmp >> qtmp;
		struct pro p;
		p.q = qtmp;
		p.name = ntmp;
		que.push(p);
	}

	while(!que.empty()) {
		struct pro p = que.front();
		que.pop();
		if(p.q > q0) {
			p.q -= q0;
			ans += q0;
			que.push(p);
		} else {
			ans += p.q;
			cout << p.name << " " << ans << endl;
		}
	}

	return 0;
}