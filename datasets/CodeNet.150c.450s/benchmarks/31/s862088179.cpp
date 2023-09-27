#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	vector<int> vec;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		vec.push_back(m);
	}

	int maxv = -2000000000;
	int minv = vec[0];

	for (unsigned int i = 1; i < vec.size(); ++i)
	{
		maxv = max(maxv, vec[i] - minv);
		minv = min(minv, vec[i]);
	}

	cout << maxv << endl;

	return 0;
}