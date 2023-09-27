#include<stdio.h>

int main()
{
	int num;
	int t;
	int i, j;
	int min;
	int max_profit;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++)
	{
		scanf("%d", &t);
		
		if(i == 0) min = t;
		
		else if(i == 1)
		{
			max_profit = t - min;
			if(t < min) min = t;
		}  
		else
		{
			if(max_profit < t - min)
			max_profit = t - min;
			if(t < min) min = t;
		}
	}
	printf("%d\n", max_profit);
	
	return 0;
}