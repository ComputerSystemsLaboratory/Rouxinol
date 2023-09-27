#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>





using namespace std;


int main()
{
	int count, money = 100000;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		money += money * 0.05;
		if (money % 1000 > 0)
		{
			int m = money / 1000;
			m++;
			money = 1000 * m;
		}
	}

	

	cout << money << endl;
}