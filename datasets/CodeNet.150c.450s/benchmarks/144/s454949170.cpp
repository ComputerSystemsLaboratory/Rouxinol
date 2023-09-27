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
	int n, m, l;
	cin >> n >> m >> l;

	vector<vector<long long>> va,vb,vc;

	for (int i = 0; i < n; i++)
	{
		vector<long long> vt;
		for (int j = 0; j < m; j++)
		{
			int tt;
			cin >> tt;
			vt.push_back(tt);
		}
		va.push_back(vt);
	}

	for (int i = 0; i < m; i++)
	{
		vector<long long> vt;
		for (int j = 0; j < l; j++)
		{
			int tt;
			cin >> tt;
			vt.push_back(tt);
		}
		vb.push_back(vt);
	}

	for (int i = 0; i < n; i++)
	{
		vector<long long> vt;
		for (int j = 0; j < l; j++)
		{
			long long sk = 0;
			for (int k = 0; k < m; k++)
			{
				sk += va.at(i).at(k) * vb.at(k).at(j);
			}
			vt.push_back(sk);
		}
		vc.push_back(vt);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << vc.at(i).at(j);
			if (j < l - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}