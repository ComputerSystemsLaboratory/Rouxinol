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
	int n[30] = { 0 };

	string s;

	while (getline(cin, s))
	{
		for (auto& c : s)
		{
			if ('a' <= c&&c <= 'z')
			{
				n[c - 'a']++;
			}
			else if ('A' <= c&&c <= 'Z')
			{
				n[c - 'A']++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%c : %d\n", 'a' + i, n[i]);
	}

	return 0;
}