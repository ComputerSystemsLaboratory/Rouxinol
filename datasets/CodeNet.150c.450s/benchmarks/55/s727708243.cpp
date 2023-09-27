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
	vector<string> s;

	while (true)
	{
		string ts;
		cin >> ts;
		if (ts == "0")
		{
			break;
		}
		else
		{
			s.push_back(ts);
		}
	}

	for (int i = 0; i != s.size(); i++)
	{
		int digits = 0;
		for (auto& c : s[i])
		{
			digits += (c - '0');
		}
		printf("%d\n", digits);
	}
	return 0;
}