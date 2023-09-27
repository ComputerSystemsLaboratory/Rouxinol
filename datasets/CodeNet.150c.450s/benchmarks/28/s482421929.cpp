#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
#include <cassert>
using namespace std;
#define len(n) (int)n.length()
#define pb push_back
#define ll long long
#define make_pair mkp
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define ALL(v) (v).begin(), (v).end()
#define dbg(n) cerr << "//" << #n << ":" << n <<endl
typedef pair<ll, ll> LLARR;
#define INF 999999999

int w[100003];
int n,k;

ll check(ll p)
{
	ll ret = 0;
	ll tmp = 0;
	ll i = 0;
	REP(j, k)
	{
		ll s = 0;
		while (s + w[i] <= p)
		{
			s += w[i];
			i++;
			if (i == n)
				return n;
		}
	}
	return i;
}

int main()
{
	ios::sync_with_stdio(false);

	cin >> n >> k;
	REP(i, n)
	{
		cin >> w[i];
	}

	ll ma = 10000 * 100000;
	ll l = 0;
	ll r = ma;
	ll mid = 0;
	while (l + 1 < r)
	{
		mid = (l + r) / 2;
		if (check(mid) >= n)
		{
			r = mid;
		}
		else
		{
			l = mid;
		}
	}
	
	cout << r << endl;
	return 0;
}