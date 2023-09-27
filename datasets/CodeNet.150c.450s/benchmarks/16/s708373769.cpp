#include <iostream>
#include <numeric>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<int> c(s.size() + 1, false);
	int h = 0;
	c[0] = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		switch (s[i])
		{
		case '_': break;
		case '\\': h -= 1; break;
		case '/': h += 1; break;
		}
		c[i + 1] = h;
	}

	int sum = 0;
	vector<int> area;
	stack<bool> d;
	for (int i = 0; i < s.size(); ++i)
	{
		switch (s[i])
		{
		case '_':
			sum += (1 * d.size());
			break;

		case '\\':
			for (int j = i + 1; j <= s.size(); ++j)
				if (c[i] <= c[j]) { d.push(true); break; }
			break;

		case '/':
			if (!d.empty())
				sum += 2 * d.size() - 1, d.pop();
			break;
		}

		if (d.empty() && sum != 0)
			area.push_back(sum), sum = 0;
	}

	cout << accumulate(area.begin(), area.end(), 0) << endl;
	cout << area.size();
	for (auto a : area)
		cout << " " << a;
	cout << endl;

	return 0;
}