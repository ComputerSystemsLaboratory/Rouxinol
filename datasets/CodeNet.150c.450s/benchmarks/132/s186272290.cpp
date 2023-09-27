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



using namespace std;



int main()
{
	int n, p, wan, temoto[50];
	
	while (cin >> n >> p)
	{
		if (n == 0 && p == 0) break;
		
		//wan, temotoの初期化
		wan = p;
		for (int i=0; i<n; i++) temoto[i] = 0;
		
		for (int i=0; i<1000000; i++)
		{
			if (wan >= 2)
			{
				wan--;
				temoto[i % n]++;
			} else if (wan == 0) {
				wan = temoto[i % n];
				temoto[i % n] = 0;
			} else if (wan == 1) {
				bool flag = true;		//forの後trueならその人の勝ち
				for (int j=0; j<n; j++)
				{
					if (j == i % n) continue;
					if (temoto[j] != 0) flag = false;
				}
				if (flag)
				{
					cout << i % n << endl;
					break;
				} else {
					wan--;
					temoto[i % n]++;
				}
			}
		}
	}
	
	return 0;
}