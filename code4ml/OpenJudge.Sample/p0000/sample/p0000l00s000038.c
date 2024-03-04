#include<stdio.h>

int main()
{

	int i,j,high[10],flag=1,escape;

	for(i=0;i<10;i++)
	{
		scanf("%d",&high[i]);
	}
	
	while(flag<100)
	{
		for(i=0;i<10-flag;i++)
		{
			if(high[i]<high[i+1])
			{
				escape=high[i];
				high[i]=high[i+1];
				high[i+1]=escape;
			}
		}
		
		flag += 1;
	}

	printf("%d\n%d\n%d",high[0],high[1],high[2]);
	


return 0;

}