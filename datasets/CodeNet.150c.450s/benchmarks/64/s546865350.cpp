#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

bool solve(int i, int m)
{
	bool res;
	if (m == 0)
		return true;
	if (i >= a.size())
		return false;
	res = solve(i + 1, m) || solve(i + 1, m - a[i]);
	return res;
}

int main() {
	int n;
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q;
	cin >> q;
	vector<int> m(q);
	for (int i = 0; i < q; i++)
	{
		cin >> m[i];
	}
	for (int i = 0; i < q; i++)
	{
		if (solve(0, m[i]))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}
