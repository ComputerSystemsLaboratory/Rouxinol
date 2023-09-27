#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef pair<string, int> f_pair;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<f_pair> a;
	string s;
	while (cin >> s)
	{
		int n;
		bool exist = false;

		for (int i = 0; i < a.size(); ++i)
			if (s == a[i].first)
			{
				exist = true, n = i;
				break;
			}

		if (exist)
			a[n].second++;
		else
			a.push_back(f_pair(s, 1));
	}

	int lMax = a[0].first.size();
	int fMax = a[0].second;
	int n = 0, m = 0;
	for (int i = 1; i < a.size(); ++i)
	{
		if (a[i].second > fMax)
			fMax = a[i].second, n = i;

		if (a[i].first.size() > lMax)
			lMax = a[i].first.size(), m = i;
	}

	cout << a[n].first << " " << a[m].first << endl;

	return 0;
}