#include<bits/stdc++.h>
using namespace std;
int num[200005];
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=b;i<a;i++)
	{
		if(num[i-b+1]<num[i+1])
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}