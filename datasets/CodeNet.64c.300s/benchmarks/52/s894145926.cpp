#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define rep(i,n) for(i=0;i<n;i++)
#define rep_r(i,n) for(i=n-1;i>=0;i--)
#define debug_i(x) printf("x:%d\n",x)
#define debug_s(str) printf("str:%s\n",str)
#define debug_c(c) printf("c:%c\n",c) 

int main()
{
	int i,j,k;
	int n,s,kep,count=0,ans=0,a_c=0;
	int num[11]={0,1,2,3,4,5,6,7,8,9};
	int bit[11]={};
	int sum=0;
	while(1)
	{
		scanf("%d %d",&n,&s);
		if(n==0 && s==0)break;
		rep(i,1023)
		{
			sum++;
			kep=sum;
			for(j=0;;j++)
			{
				if(kep>0)
				{
					bit[j]=kep%2;
					kep/=2;
				}
				else break;
			}
			rep(j,10)if(bit[j]==1)count++;
			if(count==n)
			{
				rep(k,10)ans+=bit[k]*k;
				if(ans==s)a_c++;
			}
			count=0;
			ans=0;
		}
		printf("%d\n",a_c);
		rep(i,10)bit[i]=0;
		sum=0;
		a_c=0;
	}
	return 0;
}