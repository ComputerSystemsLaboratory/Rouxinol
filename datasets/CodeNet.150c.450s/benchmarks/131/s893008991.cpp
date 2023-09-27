#include"bits/stdc++.h"
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, a, b) for (int i = b - 1; i >= a; i--)
#define RREP(i, n) RFOR(i, 0, n)
#define rep(i, a, b) for (auto i = a; i < b; i++)
#define rrep(i, a, b) for (auto i = a; i > b; i--)
#define range(i, a, b) (a <= i && i < b)
#define fi first
#define fs first
#define se second
#define sc second
using namespace std;
using vec = vector<int>;
using mat = vector<vec>;
typedef pair<int, int> P;
#define ll long long

bool solve()
{
	int a, L; cin >> a >> L;
	if (a == 0 && L == 0)return false;
	map<int, int> mp;
	mp[a] = 0;

	int j = 0;
	while (++j)
	{
		vec digit(L);
		REP(i, L)
		{
			digit[i] = a % 10;
			a /= 10;
		}
		sort(digit.begin(), digit.end());
		int n1 = 0, n2 = 0;
		REP(i, L)
		{
			n1 *= 10;
			n1 += digit[i];
			n2 *= 10;
			n2 += digit[L - i - 1];
		}
		a = n2 - n1;
		if (mp.count(a))
		{
			cout << mp[a] << " " << a << " " << j - mp[a] << endl;
			return true;
		}
		mp[a] = j;
	}


	return true;
}

int main()
{
	while (solve());
	return 0;
}
