#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
	char str[4+1];
	int ctr[4] = {0};
	for (int i = 0; i < n; i++)
	{
		scanf("%s",&str);
		if (str[0] == 'A')
		{
			ctr[0]++;
		}
		else if (str[0] == 'W')
		{
			ctr[1]++;
		}
		else if (str[0] == 'T')
		{
			ctr[2]++;
		}
		else if (str[0] == 'R')
		{
			ctr[3]++;
		}
	}
	printf("AC x %d\n",ctr[0]);
	printf("WA x %d\n",ctr[1]);
	printf("TLE x %d\n",ctr[2]);
	printf("RE x %d\n",ctr[3]);
	return 0;
}