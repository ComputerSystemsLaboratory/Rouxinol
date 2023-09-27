#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	reverse(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		string s = (i == n - 1) ? "\n" : " ";
		cout << s;
	}
	return 0;
}