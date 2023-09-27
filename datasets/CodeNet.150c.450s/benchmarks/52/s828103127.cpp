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
	vector<int> a;
	int n;
	for (; cin >> n;)
	{
		if (n == 0)
		{
			cout << a.back() << endl;
			a.pop_back();
		}
		else
		{
			a.push_back(n);
		}
	}
}
