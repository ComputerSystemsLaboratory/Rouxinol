#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<set>
#define N 1000005
using namespace std;
bool a[N];
int b[N];
int c[10];
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		if(!n&&!m) break;
		memset(a,false,sizeof(a));
		memset(b,0,sizeof(b));
		int res=0;
		a[n]=true;
		b[n]=res++;
		while(1)
		{
			for(int i=0;i<m;++i) c[i]=0;
			 int cnt=0;
			 while(n)
			 {
				 int b=n%10;
				 c[cnt++]=b;
				 n/=10;
			 }
			 sort(c,c+m);
			 int sum1=0,sum2=0;
			 for(int i=0;i<m;++i) sum1=sum1*10+c[i];
			 for(int i=m-1;i>=0;--i) sum2=sum2*10+c[i];
			 n=sum2-sum1;
			 if(a[n]) {printf("%d %d %d\n",b[n],n,res-b[n]);break;}
			 else {a[n]=1;b[n]=res++;}
		}
		
	}return 0;
}