#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	vector<vector<int>> m(r, vector<int>(c));
	for (auto &v : m)
		for (auto &x : v)
			cin >> x;
	for (auto &v : m)
		v.push_back(accumulate(v.begin(), v.end(), 0));
	m.push_back(vector<int>(c + 1));
	for (int j = 0; j <= c; j++)
		m.back()[j] = accumulate(m.begin(), m.end(), 0, [j](int s, auto v) {return s + v[j]; });
	for (int i = 0; i <= r; i++)
		for (int j = 0; j <= c; j++)
			cout << m[i][j] << (j == c ? '\n' : ' ');
}
