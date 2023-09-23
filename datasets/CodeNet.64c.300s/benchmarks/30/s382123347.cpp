#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t=0,yen,put=0,coin[6]={500,100,50,10,5,1};
	while(scanf("%d",&yen),yen!=0)
	{
		yen=abs(1000-yen);
		for(int i=0;i<6;i++,t=0)
		{
			t=yen/coin[i];
			put+=t;
			yen-=t*coin[i];
		}
		printf("%d\n",put);
		put=0;
	}
	//Sleep(1000);
}