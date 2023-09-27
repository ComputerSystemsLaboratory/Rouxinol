#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>

#define PI 3.14159265359

#define INF 1000000;

using namespace std;


/*
class ElectronicPetEasy
{
public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2)
	{
		
	}
};
*/






int main()
{
	int n, m;
	
	while (cin >> n >> m, n)
	{
		int t[n];
		int h[m];
		int tsum = 0, hsum = 0;
		
		for (int i=0; i<n; i++)
		{
			cin >> t[i];
			tsum += t[i];
		}
		for (int i=0; i<m; i++)
		{
			cin >> h[i];
			hsum += h[i];
		}
		
		int taro = 1000;
		int hanako = 1000;
		
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
			{
				int tnow = tsum - t[i];
				int hnow = hsum - h[j];
				tnow += h[j];
				hnow += t[i];
				if (tnow == hnow && t[i]+h[j] < taro + hanako)
				{
					taro = t[i];
					hanako = h[j];
				}
			}
		}
		
		if (taro != 1000)
		{
			cout << taro << " " << hanako << endl;
		} else {
			cout << -1 << endl;
		}
		
	}
	
	return 0;
}