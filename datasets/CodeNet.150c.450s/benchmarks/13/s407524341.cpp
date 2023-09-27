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
	string s, p;
	cin >> s >> p;

	s = s + s;
	for (int i = 0; i < (int)(s.length() - p.length()); i++)
	{
		if (s.substr(i, p.length()) == p)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}