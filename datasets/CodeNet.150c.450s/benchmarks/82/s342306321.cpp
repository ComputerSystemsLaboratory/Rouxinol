#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int r[6][6] = {
	{ -1, 2, 4, 1, 3, -1 }, { 3, -1, 0, 5, -1, 2 }, { 1, 5, -1, -1, 0, 4 },
	{ 4, 0, -1, -1, 5, 1 }, { 2, -1, 5, 0, -1, 3 }, { -1, 3, 1, 4, 2, -1 }
};

int main()
{
	vector<int> d(6);

	for (int i = 0; i < d.size(); ++i)
		cin >> skipws >> d[i];

	int q;
	cin >> q;

	string ans;
	while (q--)
	{
		int f, t;
		cin >> t >> f;

		vector<int>::iterator itt, itf;
		itt = find(d.begin(), d.end(), t);
		itf = find(d.begin(), d.end(), f);
		ans += to_string(d[r[itt - d.begin()][itf - d.begin()]]) + "\n";
	}

	cout << ans;

	return 0;
}