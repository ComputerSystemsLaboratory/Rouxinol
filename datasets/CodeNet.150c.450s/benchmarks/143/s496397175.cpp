#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n, q;
	long long sum = 0;
	cin >> n;
	map<int, int> a;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		sum += temp;

		auto lb = a.lower_bound(temp);

		if (lb != a.end() && temp == lb->first)
			lb->second++;
		else
			a.insert(lb, {temp, 1});
	}
	cin >> q;
	vector<int> b(q), c(q);
	for (int i = 0; i < q; i++)
		cin >> b[i] >> c[i];
	for (int i = 0; i < q; i++)
	{
		auto it = a.find(b[i]);
		if (it != a.end())
		{
			int count = it->second;
			sum += ((long long) count) * (c[i] - b[i]);
			a.erase(it);

			auto lb = a.lower_bound(c[i]);

			if (lb != a.end() && c[i] == lb->first)
				lb->second += count;
			else
				a.insert(lb, { c[i], count });
		}
		cout << sum << endl;
	}
	return 0;
}