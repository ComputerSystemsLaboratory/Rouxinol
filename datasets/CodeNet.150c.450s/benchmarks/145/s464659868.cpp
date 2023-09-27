#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>


using namespace std;

int main()
{
	map<string, int> count;
	int m = 0;
	string first;
	string second("");
	while (!cin.eof())
	{
		string s;
		cin >> s;
		if (count.count(s) == 0)
			count.insert(make_pair(s, 1));
		else
			count.find(s)->second++;

		if (count.find(s)->second > m)
		{
			first = s;
			m = count.find(s)->second;
		}

		if (s.size() > second.size())
			second = s;
	}
	cout << first << " " << second << endl;
	
	return 0;
}