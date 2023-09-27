#include <stdio.h>

int main(void)
{
	int seisu[3];
	int x;
	
	scanf("%d %d %d",&seisu[0],&seisu[1],&seisu[2]);
	
	if(seisu[0]>seisu[1])
	{
	x=seisu[0];
	seisu[0]=seisu[1];
	seisu[1]=x;
	}
	
	if (seisu[0]>seisu[2])
	{
	x=seisu[0];
	seisu[0]=seisu[2];
	seisu[2]=x;
	}
	
	if(seisu[1]>seisu[2])
	{
	x=seisu[1];
	seisu[1]=seisu[2];
	seisu[2]=x;
	}
	
	printf("%d %d %d\n",seisu[0],seisu[1],seisu[2]);
		
	return 0;
}
