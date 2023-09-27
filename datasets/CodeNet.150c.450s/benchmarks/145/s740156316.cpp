#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef pair<string, int> f_pair;

bool pairCompare(const f_pair& a1, const f_pair& a2)
{
	return a1.second > a2.second;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<f_pair> a;
	string s, lMax;
	while (cin >> s)
	{
		int n;
		bool exist = false;

		if (s.size() > lMax.size()) lMax = s;
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

	sort(a.begin(), a.end(), pairCompare);
	cout << a[0].first << " " << lMax << endl;

	return 0;
}