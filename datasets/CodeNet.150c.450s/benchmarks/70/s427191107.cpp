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
	int m, d;
	while (true)
	{
		scanf("%d %d", &m, &d);
		if (m == 0 && d == 0)
			break;

		int total = d;
		int dd[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		for (int i = 1; i < m; ++i)
		{
			total += dd[i-1];
		}
		char* days[] = { "Monday", "Tuesday", "Wednesday", "Thursday",
			"Friday", "Saturday", "Sunday" };
		puts(days[(total+2)%7]);
	}
	return 0;
}