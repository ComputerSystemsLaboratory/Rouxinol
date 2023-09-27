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

long long func(int n)
{
	return (n > 1) ? n * func(n - 1) : 1;
}
int main()
{
	int n;
	cin >> n;

	cout << func(n) << endl;
}
