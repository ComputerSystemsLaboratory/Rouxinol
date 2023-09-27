#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k, i = 0, j = 0;
	cin >> n >> k;
	vector<int> w(n, 0);
	vector<int> track(k, 0);
	vector<int> t_init(track);
	int P;
	int sum_w = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
		sum_w += w[i];
	}
	P = sum_w / k - 1;
	while (i != w.size())
	{
		i = 0;
		j = 0;
		P++;
		track = t_init;
		while (i != w.size())
		{
			if (track[j] + w[i] > P)
			{
				if (++j == k) break;
			}
			else
			{
				track[j] += w[i++];
			}
		}

	}
	cout << P << endl;
	return 0;
}
