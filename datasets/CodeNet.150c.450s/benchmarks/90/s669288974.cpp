
/* vo0_28.cpp */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

inline int MAX(int a, int b) { return (a < b) ? b : a; }

int main()
{
	vector<int> d;
	int count[100];
	
	for (int i = 0; i < 100; ++i) { count[i] = 0; }

	int n;
	while (cin >> n) { d.push_back(n); }

	sort(d.begin(), d.end());

	for (int i = 0; i < d.size(); ++i) { count[d[i] - 1]++; }

	int max = 0;
	for (int i = 0; i < d.size(); ++i) { max = MAX(max, count[i]); }
	for (int i = 0; i < d.size(); ++i) {
		if (max == count[i])
			cout << i + 1 << '\n';
	}

	return 0;
}