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
#define all(a) (a).begin(), (a).end()

using namespace std;

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

signed main() {
	int n, m;
	cin >> n >> m;

	vector<int> c;
	inputVector(c, m);

	vector<int> cnt(n + 1, INT_MAX);
	cnt[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int cj : c) {
			if (i < cj) continue;
			cnt[i] = min(cnt[i], cnt[i - cj] + 1);
		}
	}

	cout << cnt[n] << endl;

    return 0;
}