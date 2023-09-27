#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <set>
#include <map>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()

using namespace std;

int main()
{
	int num = 0;
	while (cin >> num && num != 0)
	{
		string dat;
		int l = 0, r = 0, h = 0, ans = 0;
		rep(i, num) 
		{ 
			cin >> dat; 
			switch (dat[0])
			{
			case 'r':
				if (dat[1] == 'u') { r++; h++; }
				else { r--; h--; }
				break;
			case 'l':
				if (dat[1] == 'u') { l++; h++; }
				else { l--; h--; }
				break;
			}
			if (r + l + h == 4) { ans++; r = 0; l = 0; h = 0; }
			else if (r + l + h == -4) {ans++; r = 0; l = 0; h = 0;}
		}
		printf("%d\n", ans);
	}

	return 0;
}