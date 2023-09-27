#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, char, ll> t4;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

const ll mod = 1000000007;

static const ll INF = 1e15;

struct Levenshtein_distance {
	const string s1;
	const string s2;
	vector<vector<ll>> dp;

	Levenshtein_distance(string s1, string s2) : s1(s1), s2(s2) {
	}

	ll solve() {
		dp.resize(s1.size() + 1, vector<ll>(s2.size() + 1, INF));
		rep(i, s1.size()) {
			dp[i][0] = i;
		}
		rep(j, s2.size()) {
			dp[0][j] = j;
		}
		rep(i, s1.size()) {
			rep(j, s2.size()) {
				if (s1[i] == s2[j]) {
					dp[i+1][j+1] = dp[i][j];
				}
				else {
					ll cost = dp[i+1][j+1];
					//insert
					cost = min(cost, dp[i][j+1] + 1);
					cost = min(cost, dp[i+1][j] + 1);
					//replace
					cost = min(cost, dp[i][j] + 1);
					dp[i+1][j+1] = cost;
				}
			}
		}
		return dp[s1.size()][s2.size()];
	}
};

int main(void)
{
	string s1,s2;
	cin >> s1 >> s2;
	Levenshtein_distance dist(s1, s2);
	auto d = dist.solve();
	cout << d << endl;
	return 0;
}


