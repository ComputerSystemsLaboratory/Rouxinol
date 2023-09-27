#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<double> r(n);
	for (int i = 0; i < n; i++)
	{
		cin >> r[i];
	}
	double max_profit = -1000000000;
	double min_r = r[0];
	for (int i = 1; i < n; i++)
	{
		min_r = min(min_r, r[i - 1]);
		max_profit = max(max_profit, r[i] - min_r);
	}
	cout << setprecision(10) << max_profit << endl;
}
