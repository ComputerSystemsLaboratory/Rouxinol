#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int a,b,c,hasil;

int main()
{
	while(scanf("%d %d", &a, &b) != EOF)
	{
		hasil=1;
		c=a+b;
		while(c>=10)
		{
			c=c/10;
			hasil++;
		}
		printf("%d\n",hasil);
	}
	return 0;
}