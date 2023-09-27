#include <bits/stdc++.h>

using namespace std;

vector<int> num(100005);

int n;

int partition(int start, int end)
{
	int pivot = num[end];
	int pos = start - 1;
	for (int i = start; i <= end - 1; ++i) {
		if (num[i] <= pivot) {
			++pos;
			std::swap(num[pos], num[i]);
		}
	}
	std::swap(num[pos + 1], num[end]);
	return pos + 1;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> num[i];

	int pos = partition(0, n - 1);
	for (int i = 0; i < pos; ++i) cout << num[i] << ' ';
	cout << '[' << num[pos] << ']';
	if (pos != n - 1) cout << ' ';
	for (int i = pos + 1; i < n; ++i) {
		cout << num[i];
		if (i != n - 1) cout << ' ';
	}
	cout << endl;

	return 0;
}
