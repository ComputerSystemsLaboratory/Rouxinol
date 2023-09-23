#include <stdio.h>


int main(void)
{
	int a[1010];
	int b[1010];
	int t[1010];
	int ans[1010];
	int i=0;
	int j=0;
	int n=0;
	a[0] = 1;
	
	for(;;)
	{
		scanf("%d",&t[j]);
		if(t[j]==0)
		{
			
			break;
			
		}
		j++;
	}
	
	
	
	
	
	a[1]=1;
	a[2]=2;
	a[3]=4;
	
	for(i=4;i<1010;i++)
	{
		
		a[i]=a[i-1]+a[i-2]+a[i-3];
		ans[i]=a[i]/3650;
	}
	
	int k,unk;
	
	
	for(k=0;k<j;k++)
	{
		printf("%d\n",ans[t[k]]+1);
	}

}