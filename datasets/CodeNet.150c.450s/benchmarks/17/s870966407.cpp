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
	vector<int> a(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> a.at(i);
	}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	for (int i = 0; i < 5; i++)
	{
		cout << a.at(i) << (i == 4 ? "" : " ");
	}

	cout << endl;
}
