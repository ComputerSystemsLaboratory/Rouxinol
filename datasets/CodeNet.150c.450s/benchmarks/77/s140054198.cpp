#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, a, n) for (int i = (a); i <= (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

signed main() {
    int n;
    while (cin >> n) {
	if (!n) break;

	vector<pair<int, int>> gems;
	rep(i, n) {
	    int x, y;
	    cin >> x >> y;
	    if (x == 10 && y == 10) continue;
	    gems.push_back(make_pair(x, y));
	}

	int x = 10;
	int y = 10;

	int m;
	cin >> m;
	rep(i, m) {
	    char c;
	    int len;
	    cin >> c >> len;

	    rep(j, len) {
		if (c == 'N') y++;
		if (c == 'E') x++;
		if (c == 'W') x--;
		if (c == 'S') y--;
		rep(k, gems.size()) {
		    if (x == gems[k].first && y == gems[k].second) {
			gems.erase(gems.begin() + k);
			break;
		    }
		}
	    }
	}

	cout << (gems.size() ? "No" : "Yes") << endl;
    }

    return 0;
}