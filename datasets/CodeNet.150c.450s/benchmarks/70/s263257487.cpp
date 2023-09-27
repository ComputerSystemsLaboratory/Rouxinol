#include <stdio.h>

int main()
{
	char week[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int month,day;
	int numday[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;

	while((scanf("%d%d", &month, &day)) != EOF)
	{
		if (month == 0) break;
		for (i = 0; i < month -1; i++)
		{
			day += numday[i];
		}
		day = (day + 2)%7 ;
		printf("%s\n", week[day]);
	}
	return 0;
}