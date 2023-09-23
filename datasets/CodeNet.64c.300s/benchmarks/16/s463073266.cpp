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
	int n;

	cin >> n;
	int maxv = -1000000000;
	int minp,temp;
	
	cin >> minp;

	for (int i = 0; i < (n - 1); i++) {
		cin >> temp;
		maxv = max(maxv, temp - minp);
		minp = min(minp, temp);
	}

	cout << maxv << endl;

	return 0;
}
