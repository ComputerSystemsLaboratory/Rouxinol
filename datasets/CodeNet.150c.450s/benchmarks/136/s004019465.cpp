#include<cstdio>
int gcd(int a,int b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)==2)
	{
		int d = gcd(n,m),ans = n/d*m;
		printf("%d %d\n",d,ans);
	}
	return 0;
} 