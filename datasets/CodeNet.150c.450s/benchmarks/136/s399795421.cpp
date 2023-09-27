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

int getGCD(int a, int b)
{
	if (a > b)
	{
		swap(a, b);
	}
	return (a == 0) ? b : getGCD(a, b % a);
}

int getLCM(int a, int b)
{
	return (a / getGCD(a, b)) * b;
}

int main()
{
	int a, b;
	for (; cin >> a >> b;)
	{
		cout << getGCD(a, b) << " " << getLCM(a, b) << endl;
	}
}
