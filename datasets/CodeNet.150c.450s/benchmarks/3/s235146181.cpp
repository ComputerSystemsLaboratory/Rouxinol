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

class cFunc{
public:
	string sfunc;
	int arg1;
	int arg2;
	string arg3;

	cFunc(string s)
	{
		istringstream iss;
		iss.str(s);
		iss >> sfunc >> arg1 >> arg2 >> arg3;
	}
};


int main()
{
	string str;
	vector<string> vf;
	int q;

	cin >> str;
	cin >> q;
	cin.ignore();
	for (int i = 0; i < q; i++)
	{
		string temp;
		getline(cin, temp);
		vf.push_back(temp);
	}

	for (int i = 0; i < q; i++)
	{
		cFunc cf(vf.at(i));
		if (cf.sfunc == "replace")
		{
			str.replace(cf.arg1,cf.arg2 - cf.arg1 + 1,cf.arg3);
		}
		else if (cf.sfunc == "reverse")
		{
			reverse(str.begin() + cf.arg1, str.begin() + cf.arg2 + 1);
		}
		else if (cf.sfunc == "print")
		{
			string temp;
			temp = str.substr(cf.arg1, cf.arg2 - cf.arg1 + 1);
			cout << temp << endl;
		}
	}
	return 0;
}