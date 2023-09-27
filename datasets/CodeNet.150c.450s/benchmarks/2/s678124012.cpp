#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <stack>
#include <queue>

#define INT_MAX 2147483647
#define INT_MIN -2147483647
using namespace std;

int partition(vector<int> &vec, int l, int r)
{
	if (vec.empty()) return -1;

	int len = vec.size();
	int tmp = vec[len - 1];

	int pre = l;
	for (int idx = l; idx <= r; ++idx)
	{
		if (vec[idx] <= tmp)
			swap(vec[idx], vec[pre++]);
	}
	vec[pre - 1] = tmp;
	return pre - 1;
}

int main()
{
	vector<int> data;
	int v;
	cin >> v;
	while (cin >> v)
		data.push_back(v);

	int len = data.size();
	int pos = partition(data, 0, len - 1);
	if (pos >= 0)
	{
		for (int i = 0; i < pos; ++i) cout << data[i] << " ";
		cout << "[" << data[pos] << "] ";
		for (int i = pos+1; i < len - 1; ++i) cout << data[i] << " ";
		if (pos != len - 1) cout << data[len - 1];
	}
	cout << endl;

	return 0;
}