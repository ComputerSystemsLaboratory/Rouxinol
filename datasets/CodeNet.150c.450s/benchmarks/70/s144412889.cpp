#include<cstdio>

int day_date[12]={3,6,0,3,5,1,3,6,2,4,0,2};
int mon;
int day;

int main()
{
	while(true)
	{
		scanf("%d%d",&mon,&day);
		if(mon==0)break;
		int date=(day+day_date[mon-1]-1)%7;
		if(date==0) printf("Monday");
		if(date==1) printf("Tuesday");
		if(date==2) printf("Wednesday");
		if(date==3) printf("Thursday");
		if(date==4) printf("Friday");
		if(date==5) printf("Saturday");
		if(date==6) printf("Sunday");
		printf("\n");
	}
	return 0;
}