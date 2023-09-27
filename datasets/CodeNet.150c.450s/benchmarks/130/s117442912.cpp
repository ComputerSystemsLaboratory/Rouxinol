#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

//#include <map>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> vb;
	vector<vector<int>> vva;

	for (int i = 0; i < n; i++)
	{
		vector<int> vt;

		for (int j = 0; j < m; j++)
		{
			int a;
			cin >> a;
			vt.push_back(a);
		}
		vva.push_back(vt);
	}

	for (int i = 0; i < m; i++)
	{
		int b;
		cin >> b;
		vb.push_back(b);
	}

	vector<int> vans;

	for (int i = 0; i < n; i++)
	{
		int ans = 0;
		for (int j = 0; j < m; j++)
		{
			ans += vva.at(i).at(j) * vb.at(j);
		}
		vans.push_back(ans);
	}

	for (int i = 0; i < vans.size(); i++)
	{
		cout << vans.at(i) << endl;
	}

	return 0;
}