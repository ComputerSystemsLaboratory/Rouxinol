#include <bits/stdc++.h>
using namespace std;

/*
提出前に確認!
- setとmultisetを間違えない
*/

int	main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	long long all = 0;
	for (int i = 0; i < n; i++) all += a[i];
	vector<int> count_a(1e5 + 1, 0);
	for (int i = 0; i < n; i++) count_a[a[i]]++;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int b, c;
		cin >> b >> c;
		all += (long long)(c - b) * count_a[b];
		count_a[c] += count_a[b];
		count_a[b] = 0;
		cout << all << endl;
	}
	return (0);
}
