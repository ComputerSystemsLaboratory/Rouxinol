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
	string str;
	int m;
	int h;

	while (cin >> str)
	{
		if (str == "-") break;

		cin >> m;

		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> h;
			sum += h;
		}
		cout << str.substr(sum % str.size());
		cout << str.substr(0, sum % str.size()) << endl;
	}

	return 0;
}