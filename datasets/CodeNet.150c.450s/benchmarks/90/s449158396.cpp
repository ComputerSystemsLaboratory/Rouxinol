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
	vector<int> a(100);

	int n;
	for (; cin >> n;)
	{
		a.at(n - 1)++;
	}

	vector<int> b = a;
	sort(b.begin(), b.end());

	for (int i = 0; i < a.size(); i++)
	{
		if (a.at(i) == b.back())
		{
			cout << i + 1 << endl;
		}
	}
}
