#include<stdio.h>
int main()
{
int tc;
scanf("%d", &tc);
int AC=0,WA=0,TLE=0,RE=0;
for(int i=0; i < tc ; i++)
{
	char verdict[100];
	scanf("%s", verdict);
    if(verdict[0] == 'A')
	{
        AC++;
    }
    else if(verdict[0] == 'W')
	{
        WA++;
    }
    else if(verdict[0] == 'T')
	{
        TLE++;
    }
    else if (verdict[0] == 'R')
	{
        RE++;
    }
}
printf("AC x %d\n", AC);
printf("WA x %d\n", WA);
printf("TLE x %d\n", TLE);
printf("RE x %d\n", RE);
return 0;
}