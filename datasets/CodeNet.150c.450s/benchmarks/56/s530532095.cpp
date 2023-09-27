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
	long n;
	cin >> n;

	vector<long> vData;

	for (long i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		vData.push_back(t);
	}

	cout << *min_element(vData.begin(), vData.end()) << " " <<
			*max_element(vData.begin(), vData.end()) << " " <<
			accumulate(vData.begin(), vData.end(), 0L) <<
			endl;
	return 0;
}