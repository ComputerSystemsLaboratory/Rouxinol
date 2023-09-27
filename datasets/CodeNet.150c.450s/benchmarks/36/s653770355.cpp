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
	int d;
	for (; cin >> d;)
	{
		int s = 0;
		int x = d;
		for (; x < 600; x += d)
		{
			s += x * x * d;
		}

		cout << s << endl;
	}
}
