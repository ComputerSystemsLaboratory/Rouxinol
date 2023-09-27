#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

//#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vData;

	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		vData.push_back(t);
	}

	reverse(vData.begin(), vData.end());

	for (int i = 0; i < vData.size(); i++)
	{
		cout << vData.at(i);
		if (i == vData.size() - 1)break;
		cout << " ";
	}
	cout << endl;

	return 0;
}