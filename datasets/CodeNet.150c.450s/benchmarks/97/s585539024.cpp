#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

pair<int, int> s[200];
int n;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main()
{
	while (cin >> n, n)
	{
		int left = 0;
		int right = 0;
		int top = 0;
		int bottom = 0;
		s[0] = pair<int, int>(0, 0);

		for (int i = 1; i < n; i++)
		{
			int t, d;
			cin >> t >> d;
			s[i] = pair<int, int>(s[t].first + dx[d], s[t].second + dy[d]);
			left = min(left, s[i].first);
			right = max(right, s[i].first);
			top = max(top, s[i].second);
			bottom = min(bottom, s[i].second);
		}

		cout << right - left + 1 << " " << top - bottom + 1 << endl;
	}

	return 0;
}