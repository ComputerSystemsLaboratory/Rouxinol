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
#include <iomanip>
using namespace std;

//??°?????????????????°

void function()
{
	//??¢??°
}

int main()
{
	string s;
	int sum;
	while (cin >> s)
	{
		if (s == "0")
		{
			break;
		}
		sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			sum += (int)s[i] - (int)'0';
		}
		cout << sum << endl;
	}
	return 0;
}