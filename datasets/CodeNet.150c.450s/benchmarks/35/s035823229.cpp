#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <vector>

//#define PI 3.141592653589

using namespace std;


int main()
{
	int n;
	int seisuu[5000];
	int wa = 0;
	int wa_max = -100001;
	
	while (1)
	{
		wa_max = -100001;
		
		cin >> n;
		if (n == 0) break;
		
		for (int i=0; i<n; i++)
		{
			cin >> seisuu[i];
		}
		
		for (int i=0; i<n; i++)
		{
			for (int j=i; j<n; j++)
			{
				wa += seisuu[j];
				wa_max = max(wa_max, wa);
			}
			wa = 0;
		}
		cout << wa_max << endl;
		
		/*
		for (int i=0; i<n; i++)
		{
			cout << seisuu[i] << " ";
		}
		*/
	}
	
	return 0;
}