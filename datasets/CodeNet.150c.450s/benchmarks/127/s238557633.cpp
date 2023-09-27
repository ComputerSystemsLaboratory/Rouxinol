#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
	int M;
	cin >> M;
	for (int t = 0; t < M; t++)
	{
		set<string> latte;
		string S;
		cin >> S;
		for (int i = 1; i < S.size(); i++)
		{
			string a = S.substr(0, i);
			for (int j = 0; j < 2; j++, reverse(a.begin(), a.end()))
			{
				string b = S.substr(i);
				for (int k = 0; k < 2; k++, reverse(b.begin(), b.end()))
				{
					latte.insert(a + b);
					latte.insert(b + a);
				}
			}
		}
		printf("%d\n", latte.size());
	}
	return 0;
}