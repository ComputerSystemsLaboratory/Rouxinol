#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
constexpr ll INF = 1ll<<60;

template<class T>
bool chmin(T &a, T b)
{
	if (a > b)
	{
		a = b;
		return false;
	}
	return true;
}

template<class T>
bool chmax(T &a, T b)
{
	if (a < b)
	{
		a = b;
		return false;
	}
	return true;
}

template<class T>
bool chmax(T &a, initializer_list<T> l)
{
	return chmax(a, *max_element(l.begin(), l.end()));
}

template<class T>
bool chmin(T &a, initializer_list<T> l)
{
	return chmin(a, *min_element(l.begin(), l.end));
}

ll dp[110][110];
ll N;
ll P[110];
ll c{0};

ll solve(ll l, ll r)
{
	if (dp[l][r] != -1) return dp[l][r];
	
	//	if (c++ == 10) exit(-1);
	if (abs(l - r) <= 1) return dp[l][r] = 0;

	ll res{INF};
	for (ll mid = l+1; mid < r; ++mid)
	{
		chmin(res, solve(l, mid) + solve(mid, r) + P[l] * P[r] * P[mid]);
	}

	return dp[l][r] = res;
}

int main(int argc, char **argv)
{
	cin >> N;
	for (ll i = 0;i < N; ++i)
		cin >> P[i] >> P[i+1];

	for (ll i = 0; i < 110; ++i) for (ll j = 0; j < 110; ++j) dp[i][j] = -1;
	std::cout << solve(0, N) << std::endl;
}

