#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
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

	int m = 100000;
	for (int i = 0; i < n; i++)
	{
		m += (int)(0.05 * m);
		m = (m / 1000 + (m%1000 == 0 ? 0 : 1)) * 1000;
	}

	cout << m << endl;
}
