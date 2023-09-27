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

//#include <map>

using namespace std;

int main()
{
	string s;
	while (1)
	{
		string st;
		getline(cin, st);
		if (st == "\0")break;

		s += st;
	}

	char ch[1200];
	memset(ch, 0, sizeof(ch));
	
	strcpy(ch, s.c_str());

	vector<string> vs;

	for (char i = 'a'; i <= 'z'; i++)
	{
		char * pth = ch;
		int count = 0;
		while (*pth)
		{
			if (*pth == i || *pth == (i - 0x20))
			{
				count++;
			}
			pth++;
		}
		ostringstream ss;
		ss << i << " : " << count;
		string st;
		st = ss.str();
		vs.push_back(st);
	}

	for (int i = 0; i < vs.size(); i++)
	{
		cout << vs.at(i) << endl;
	}

	return 0;
}