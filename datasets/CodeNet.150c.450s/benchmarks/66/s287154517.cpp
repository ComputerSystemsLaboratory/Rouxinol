#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
	int i,j,k,l;
	int n,m;
	char a[257][257];
	char b[257][257];
	int p=0; //空いていれば１

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",a[i]);}

	scanf("%d",&m);
	for(i=0;i<m;i++)
	{scanf("%s",b[i]);}

	for(i=0;i<m;i++)
		{
			int c=0; 
			for(j=0;j<n;j++)
			{
				if(strcmp(b[i],a[j])==0)
				{
					if(p==0){printf("Opened by %s\n",b[i]);p=1;c++;break;}
					else{printf("Closed by %s\n",b[i]);p=0;c++;break;}
				}
			}
			if(c==0)
			{
				printf("Unknown %s\n",b[i]);
			}
		}
	return 0;
}
	