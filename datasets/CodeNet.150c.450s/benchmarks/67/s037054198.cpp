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
#include <climits>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

bool solve(int idx, int n) {
	int sum = 0;
	REP (i, idx, n) {
		sum += i;
		if (sum == n) return true;
	}
	return false;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		int ans = 0;
		REP (i, 1, n) {
			ans += solve(i, n);
		}
		cout << ans << endl;
	}
	return 0;
}