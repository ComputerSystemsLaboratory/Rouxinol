
#include<stdio.h>
using namespace std;

int main()
{
	int a, b, s, i;
	while ((scanf("%d %d", &a, &b)) != EOF)
	{
		s = a + b;
		for (i = 0;s>0; i++)
		{
			s = s / 10;
		}
		printf("%d\n",i);
	}
	return 0;
}