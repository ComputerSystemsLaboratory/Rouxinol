#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>
#include <regex>
#include <locale>
#include <fstream>
#include <stdlib.h>
#include <cctype>

//#include <map>

using namespace std;

int main()
{
	while (1)
	{
		string str;
		int m;
		vector<int> vn;

		getline(cin, str);
		if (str == "-")break;

		cin >> m;
		cin.ignore();
		for (int i = 0; i < m; i++)
		{
			int t;
			cin >> t;
			cin.ignore();
			vn.push_back(t);
		}

		string temp1, temp2;

		for (int i = 0; i < m; i++)
		{
			temp1 = temp2 = str;
			int t = vn.at(i);
			temp1.erase(0, t);
			temp2.erase(t, temp2.size());
			str = temp1 + temp2;
		}
		cout << str << endl;
	}
}