#include <iostream>
#include <vector>
#include <algorithm>
#define N 200
using namespace std;

int main()
{
	int n, p, d;
	while (cin >> n, n) {
		vector<int> x(n, 0), y(n, 0);
		for (int i = 1; i < n; i++) {
			cin >> p >> d;
			x[i] = x[p] + (d!=0?d==2?1:0:-1);
			y[i] = y[p] + (d!=1?d==3?1:0:-1);
		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		cout << x[n-1] - x[0] + 1 << " " << y[n-1] - y[0] + 1 << endl;
	}
	
	return 0;
}