#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>

using namespace std;

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}

typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;

int main() {
	int n;
	cin >> n;

	vi nums(n);
	int result;

	nums[0] = 0;
	FOR(i, 1, n) {
		cin >> nums[i];
	}
	cin >> result;

	vector<vector<ll> > dp(101, vector<ll>(21, 0));

	dp[1][nums[1]] = 1;

	FOR(i, 2, n) {
		REP(j, 21) {
			if(dp[i-1][j]) {
				if(j+nums[i] <= 20) {
					dp[i][j+nums[i]] += dp[i-1][j];
				}
				if(j-nums[i] >= 0) {
					dp[i][j-nums[i]] += dp[i-1][j];
				}
			}
		}
	}

	cout << dp[n-1][result] << endl;
}