#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	string W;
	vector<string> T;

	cin >> W;

	while (true)
	{
		string Ti;
		getline(cin, Ti);

		if (Ti == "END_OF_TEXT")
		{
			break;
		}
		else
		{
			for (auto& c : Ti)
			{
				if ('A' <= c&&c <= 'Z')
				{
					c += ('a' - 'A');
				}
			}
			T.push_back(Ti);
		}
	}

	int counter = 0;
	for (auto& t : T)
	{
		vector<string> tempT;
		string s;
		for (auto& c : t)
		{
			if (c == ' ')
			{
				tempT.push_back(s);
				s.clear();
			}
			else
			{
				if ('A' <= c&&c <= 'Z')
				{
					c += ('a' - 'A');
				}
				s += c;
			}
		}
		tempT.push_back(s);

		for (auto& ts : tempT)
		{
			if (W == ts)
			{
				counter++;
			}
		}
	}

	printf("%d\n", counter);
	return 0;
}