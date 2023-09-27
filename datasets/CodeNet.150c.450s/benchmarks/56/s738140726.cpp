#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> v(n);
	for_each(v.begin(), v.end(), [&](long long & i)
	{
		cin >> i;
	});
	cout << * min_element(v.begin(), v.end());
	cout << " ";
	cout << * max_element(v.begin(), v.end());
	cout << " ";
	//cout << accumulate(v.begin(), v.end(), 0);
	long long s = 0;
	for (size_t i = 0; i < n; i++)
	{
		s += v[i];
	}
	cout << s;
	cout << endl;
	return 0;
}