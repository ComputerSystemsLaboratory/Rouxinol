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

int dp[1000010];
int dpodd[1000010];

signed main() {
	vector<int> v, vo;

	for (int i = 1; i <= 1000000; i++) {
		dp[i] = INT_MAX;
		dpodd[i] = INT_MAX;
	}
	
	for (int i = 1; true; i++) {
		int num = i * (i + 1) * (i + 2) / 6;
		if (num > 1000000) break;
		
		v.push_back(num);
		if (num % 2) vo.push_back(num);
	}

	for (int i = 1; i <= 1000000; i++) {
		for (int num : v) {
			if (num > i) break;
			dp[i] = min(dp[i], dp[i - num] + 1);
		}
		for (int num : vo) {
			if (num > i) break;
			dpodd[i] = min(dpodd[i], dpodd[i - num] + 1);
		}
	}

	int input;
	cin >> input;

	while (input) {
		cout << dp[input] << ' ' << dpodd[input] << endl;

		cin >> input;
	}

    return 0;
}