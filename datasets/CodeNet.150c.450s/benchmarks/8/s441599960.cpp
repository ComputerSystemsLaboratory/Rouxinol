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
	int n;
	int pt, ph;
	pt = ph = 0;

	vector<string> vcTa, vcHa;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		string t1, t2;
		cin >> t1 >> t2;
		cin.ignore();
		vcTa.push_back(t1);
		vcHa.push_back(t2);
	}

	for (int i = 0; i < n; i++)
	{
		if (vcTa.at(i) == vcHa.at(i))
		{
			pt++; ph++;
		}
		else if (vcTa.at(i) > vcHa.at(i))
		{
			pt += 3;
		}
		else
		{
			ph += 3;
		}
	}

	cout << pt << " " << ph << endl;

	return 0;
}