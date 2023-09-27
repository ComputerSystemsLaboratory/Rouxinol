#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> n(3);
	while (N--)
	{
		cin >> n[0] >> n[1] >> n[2];

		sort(n.begin(), n.end());
		if (pow(n[0], 2) + pow(n[1], 2) == pow(n[2], 2))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}