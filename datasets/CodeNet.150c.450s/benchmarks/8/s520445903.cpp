#include <iostream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

#define pi 3.141592653589
#define repeat(i,n) for(int i=0;i<n;i++)

int main()
{
	int n;
	int tp = 0, hp = 0;
	string taro, hanako;
	cin >> n;
	repeat(i, n)
	{
		cin >> taro;
		cin >> hanako;
		if (taro > hanako)
		{
			tp = tp + 3;
		}
		else if (taro < hanako)
		{
			hp = hp + 3;
		}
		else if (taro == hanako)
		{
			tp++;
			hp++;
		}
	}
	cout << tp << " " << hp << endl;
	return 0;
}