#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int Max(int a, int b)
{
	if(a>b) return a;
	return b;
}

int main()
{
	int i,j,k,R,C,a[10][10000],b,w,a1[10][10000],s,p,s_max;
	
	while(1)
	{
	   cin >> R;
	   cin >> C;
	   if(R==0) break;
	   s_max=0;
	   for(i=0;i<=R-1;i++)
	   {
		   for(j=0;j<=C-1;j++)
		   {
		    	cin >> a[i][j];
		   }
	   }
	   for(i=0;i<=pow(2,R)/2-1;i++)
	   {
		   s=0;
		   p=i;
		   for(j=0;j<=R-1;j++)
		   {
			   if(p%2==1)
			   {
				   for(k=0;k<=C-1;k++)
				   {
					   if(a[j][k]==0) a1[j][k]=1;
					   else a1[j][k]=0;
				   }
			   }
			   else
			   {
				   for(k=0;k<=C-1;k++)
				   {
					   a1[j][k]=a[j][k];
				   }
			   }
			   p/=2;
		   }
		   for(j=0;j<=C-1;j++)
		   {
			   b=0;
			   w=0;
			   for(k=0;k<=R-1;k++)
			   {
				   if(a1[k][j]==0) b++;
				   else w++;
			   }
			   s+=Max(b,w);
		   }
		   if(s_max<s) s_max=s;
	   }
	   printf("%d\n",s_max);
	}
	return 0;
}