#include<cstdio>

using namespace std;

int A=0,B=0;

int main()
{
	int n;
	while(true)
	{
		A=0,B=0;
	scanf("%d",&n);
	if(n==0)break;
	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b)A+=a+b;
		else if(a==b)
		{
			A+=a;
			B+=b;
		}
		else B+=a+b;
	}
	printf("%d %d\n",A,B);
	}
	return 0;
}