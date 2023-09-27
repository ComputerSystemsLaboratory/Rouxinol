#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
	int N;
	while (cin >> N, N)
	{
		vector<bool> latte;
		for (int i = 0; i < N; i++)
		{
			string s;
			cin >> s;
			if (s == "lu" || s == "ru") latte.push_back(true);
			else latte.push_back(false);
		}
		int cnt = 0;
		for (int i = 1; i < N; i++)
		{
			if (latte[i] == latte[i - 1]) cnt++;
		}
		printf("%lld\n", cnt);
	}
}