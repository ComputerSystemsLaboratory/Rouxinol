#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	char str[100];
	int ac = 0, wa = 0, tle = 0, re = 0;
		
	int i;
	for (i = 1; i <= n; i++)
	{
		scanf("%s", str);
		if (str[0] == 'A' && str[1] == 'C')
		{
			ac++;
		}
		
		else if (str[0] == 'W' && str[1] == 'A')
		{
			wa++;
		}
		
		else if (str[0] == 'T' && str[1] == 'L' && str[2] == 'E')
		{
			tle++;
		}
		
		else if (str[0] == 'R' && str[1] == 'E')
		{
			re++;
		}
	}
	
	printf("AC x %d\n", ac);
	printf("WA x %d\n", wa);
	printf("TLE x %d\n", tle);
	printf("RE x %d\n", re);
	
	return 0;
}