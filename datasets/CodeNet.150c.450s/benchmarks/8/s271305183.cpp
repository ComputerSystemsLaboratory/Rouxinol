#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
using namespace std;
 
int main()
{
	int n;
	cin >> n;

	string taro, hanako;
	int tarop = 0, hanakop = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> taro >> hanako;

		if (taro > hanako)
		{
			tarop += 3;
		}
		else if (taro < hanako)
		{
			hanakop += 3;
		}
		else
		{
			tarop++;
			hanakop++;
		}
	}

	cout << tarop << " " << hanakop << endl;
	return 0;
}