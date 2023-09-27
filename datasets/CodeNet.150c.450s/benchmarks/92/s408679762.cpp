#define _USE_MATH_DEFINES

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

template <typename T> string to_string(const T& n)
{
	std::ostringstream stm;
	stm << n;
	return stm.str();
}

int main()
{
	int a, b;
	for (; cin >> a >> b;)
	{
		cout << ::to_string(a + b).length() << endl;
	}
}
