#include<stdio.h>


int n;
int score[110];
int _max,_min;
int i;
int sum;
int ans; 

int main()
{
	
	for(;;)
	{
		_max = 0;
		_min = 100000;
		sum = 0;
		
		scanf("%d",&n);
		if(n == 0)break;
		
		for(i = 0;i < n;i++)
		{
			scanf("%d",&score[i]);
			if(score[i] < _min)
			{
				_min = score[i];
			}
			if(score[i] > _max)
			{
				_max = score[i];
			}
			sum += score[i];
			
		}
		
		ans =( sum - _max - _min) /(n - 2);
		
		printf("%d\n",ans);
		
	}
	
	return 0;
	
}
		