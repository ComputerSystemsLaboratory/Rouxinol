#include <iostream>
#include <vector>

using namespace std;

bool can_load(int n, int k, vector<int>& w, int P)
{
	int cost = 0, cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		cost += w[i];
		while (cost > P)
		{
			cost = w[i];
			cnt++;
			if (cnt == k)
				return false;
		}
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	vector<int> w(n);
	int sum = 0;
	for (int i = 0; i < n; ++i)
		cin >> w[i], sum += w[i];

	// Binary Search
	int left = sum / k;
	int right = sum;
	while (left < right)
	{
		int P = (left + right) / 2;
		if (can_load(n, k, w, P))
			right = P;
		else
			left = P + 1;
	}

	cout << left << endl;

	return 0;
}