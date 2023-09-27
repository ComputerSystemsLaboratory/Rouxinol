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
	string str;
	int n;

	cin >> str >> n;

	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;

		if (command == "replace")
		{
			int f, t;
			string newStr;
			cin >> f >> t >> newStr;
			str.replace(f, t - f + 1, newStr.c_str());
		}
		else if (command == "reverse")
		{
			int f, t;
			cin >> f >> t;
			reverse(str.begin() + f, str.begin() + t + 1);
		}
		else if (command == "print")
		{
			int f, t;
			cin >> f >> t;
			for (int j = f; j <= t; j++)
			{
				printf("%c", str[j]);
			}
			printf("\n");
		}
	}
	return 0;
}