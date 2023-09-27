#include <iostream>
#include <sstream>
#include <regex>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <iomanip>
#include  <cassert>
#include <fstream>
#include <codecvt>

using namespace std;
using ll = long long int;
#define rep(i,n) for(int i = 0; i < n; i++)
#define FOR(i, a, b)  for(int i = (a); i < (b) ; i++)
#define pb push_back
#define SORT(v,n) sort(v, v+n)
#define ALL(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << '\n'
#define elif else if
#define int ll
const int INF = (1LL << 32);
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };

static const int MAX = 100000;
int n, A[MAX + 1], L[MAX + 1];

int lis() {
	int length = 1;
	L[0] = A[0];
	FOR(i, 1, n) {
		if (L[length-1] < A[i])
			L[length++] = A[i];
		else
			*lower_bound(L, L + length, A[i]) = A[i];
	}
	return length;
}

signed main() {
	ios::sync_with_stdio(true);
	cin >> n;
	rep(i, n) cin >> A[i];
	cout << lis() << endl;
	return 0;
}
