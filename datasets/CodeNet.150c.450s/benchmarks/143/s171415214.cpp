#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
	int n;
	cin >> n;
	int arr[n], sum = 0;
	map<int, int> m1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		m1[arr[i]] += 1;
	}

	int q;
	cin >> q;
	int b, c;
	while (q--)
	{
		cin >> b >> c;
		// for (auto i : m1)
		// 	cout << i.first << ":" << i.second << " ";
		// cout << "\n";
		if (m1.count(b))
		{
			sum -= b * m1[b];
			sum += c * m1[b];
			m1[c] += m1[b];
			m1.erase(b);
		}
		// for (auto i : m1)
		// 	cout << i.first << ":" << i.second << " ";
		// cout << "\n";
		cout << sum << "\n";
		// cout << "\n";
	}

	return 0;
}