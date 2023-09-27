#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	map<string, int> dic;
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char command[10];
		char c[15];
		scanf("%s", command);
		scanf("%s", c);

		if (command[0] == 'i')
		{
			dic.insert(make_pair(string(c), 0));
		}
		else if (command[0] == 'f')
		{
			if (dic.find(string(c)) != dic.end())
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else
		{
			printf("illegal input\n");
		}
	}

	return 0;
}