#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>

using namespace std;



int main()
{
	int heya[4][3][10];
	int n, b, f, r, v;
	bool first_flag;
	
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			for (int k=0; k<10; k++)
			{
				heya[i][j][k] = 0;
			}
		}
	}
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> b >> f >> r >> v;
		heya[b-1][f-1][r-1] += v;
	}
	
	first_flag = true;
	for (int i=0; i<4; i++)
	{
		if (!first_flag)
		{
			cout << "####################" << endl;
		} else {
			first_flag = false;
		}
		for (int j=0; j<3; j++)
		{
			for (int k=0; k<10; k++)
			{
				cout << " " << heya[i][j][k];
			}
			cout << endl;
		}
	}
	
	return 0;
}