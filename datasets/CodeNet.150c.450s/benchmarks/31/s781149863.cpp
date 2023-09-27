#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
static const int Max = 200000;

int main()
{
	int R[Max], n;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> R[i];

	int maxv = -2000000000;
	int minp = R[0];

	for (int i = 1; i < n; i++) {
		maxv = max(maxv, R[i] - minp);
		minp = min(minp, R[i]);
	}

	cout << maxv << endl;

	return 0;
}
