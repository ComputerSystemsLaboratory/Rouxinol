#include<stdio.h>

int main(void)
{
	int a=0,b=0,day=0;

	while(day != 10)
	{
		scanf("%d %d",&a,&b);
		if(a==0 || b ==0)break;
		else if(a==1 || a==4 || a==7)
			day = 3 + b % 7;
		else if(a==2 || a==8)
			day = 6 + b % 7;
		else if(a==3 || a==11)
			day = b % 7;
		else if(a==5)
			day = 5 + b % 7;
		else if(a == 6)
			day = 1 + b % 7;
		else if(a==9 || a==12)
			day = 2 + b % 7;
		else 
			day = 4 + b % 7;
		if(day > 6)
			day-=7;
		switch (day)
		{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 0:
			printf("Sunday\n");
			break;
		}
	}
  return 0;
}