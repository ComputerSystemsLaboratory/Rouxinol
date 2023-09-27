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
	int r, c;
	cin >> r >> c;

	vector<vector<int>> vsh;
	for (int i = 0; i < r; i++)
	{
		vector<int> vt;
		for (int j = 0; j < c; j++)
		{
			int t;
			cin >> t;
			vt.push_back(t);
		}
		vsh.push_back(vt);
	}

	for (int i = 0; i < r; i++)
	{
		int sumr = 0;
		for (int j = 0; j < c; j++)
		{
			cout << vsh.at(i).at(j) << " ";
			sumr += vsh.at(i).at(j);
		}
		vsh.at(i).push_back(sumr);
		cout << sumr << endl;
	}

	for (int i = 0; i < c + 1; i++)
	{	
		int sumc = 0;
		for (int j = 0; j < r; j++)
		{
			sumc += vsh.at(j).at(i);
		}
		cout << sumc;
		if (i < c)
		{
			cout << " ";
		}
	}
	cout << endl;

	return 0;
}