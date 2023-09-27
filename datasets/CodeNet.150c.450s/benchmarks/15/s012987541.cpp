#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, q;
	cin >> n;

	vector<int> S(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &S[i]);
	}

	cin >> q;
	vector<int> T(q);
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &T[i]);
	}

	int ans = 0;
	for (int i = 0; i < q; i++)
	{
		auto result = find(S.begin(), S.end(), T[i]);
		if (result != S.end())
		{
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}