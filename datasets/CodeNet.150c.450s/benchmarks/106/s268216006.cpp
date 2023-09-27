#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>

//#include <map>

using namespace std;

void spritStr(string str, vector<string>& v)
{
	while (str.find(' ') != -1)
	{
		v.push_back(str.substr(0, str.find(' ')));
		str.erase(0, str.find(' ') + 1);
	}
	v.push_back(str);
}

int main()
{
	string st;
	getline(cin, st);

	vector<string> vStr;
	spritStr(st, vStr);
	
	int f, t, v;
	f = stoi(vStr[0]);
	t = stoi(vStr[1]);
	v = stoi(vStr[2]);

	int count = 0;

	for (int i = f; i <= t; i++)
	{
		if (v % i == 0)
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}