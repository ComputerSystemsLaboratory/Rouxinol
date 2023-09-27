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
	int a[4], b[4];
	while (scanf("%d %d %d %d %d %d %d %d",
		a, a+1, a+2, a+3, b, b+1, b+2, b+3) != EOF)
	{
		set<int> included;
		for (int i = 0; i < 4; ++i)
			included.insert(a[i]);
		
		int hit, blow;
		hit = blow = 0;
		for (int i = 0; i < 4; ++i)
		{
			if (a[i] == b[i])
				++hit;
			else if (included.count(b[i]) > 0)
				++blow;
		}
		printf("%d %d\n", hit, blow);
	}
	
	return 0;
}