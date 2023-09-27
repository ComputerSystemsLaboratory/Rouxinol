#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int r;
	cin >> r;

	int maxv = -1000000000;
	int minv = r;
	for (int i = 1; i < n; i++)
	{
		cin >> r;
		maxv = max(maxv, r - minv);
		minv = min(minv, r);		
	}

	cout << maxv << endl;
}

