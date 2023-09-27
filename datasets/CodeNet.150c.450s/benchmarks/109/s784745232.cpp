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

int memo[86500];

int timeToInt(string s) {
    int ret = 0;
    ret += (s[0] - '0') * 36000;
    ret += (s[1] - '0') * 3600;
    ret += (s[3] - '0') * 600;
    ret += (s[4] - '0') * 60;
    ret += (s[6] - '0') * 10;
    ret += (s[7] - '0') * 1;
    return ret;
}

signed main() {
    int n;
    while (cin >> n) {
	if (!n) break;

	memset(memo, 0, sizeof(memo));

	rep(i, n) {
	    string s, t;
	    cin >> s >> t;
	    int t1 = timeToInt(s), t2 = timeToInt(t);
	    memo[t1]++;
	    memo[t2]--;
	}
	REP(i, 1, 86400) {
	    memo[i] += memo[i - 1];
	}
	int ret = 0;
	rep(i, 86450) ret = max(ret, memo[i]);
	cout << ret << endl;
    }

    return 0;
}