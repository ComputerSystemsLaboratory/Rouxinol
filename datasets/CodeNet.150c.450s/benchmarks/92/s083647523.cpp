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
	int a, b;
	for (; cin >> a >> b;)
	{
		cout << ::to_string(a + b).length() << endl;
	}
}
