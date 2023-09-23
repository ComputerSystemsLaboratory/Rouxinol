#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(void)
{
	int N[31]={0},a=0;
	for(int i=1;i<31;i++)
	{
		scanf("%d",&a);
		N[a]=1;
	}
	for(int i=1;i<31;i++)
	{
		if(N[i]!=1){printf("%d\n",i);}
	}
	return 0;
}
//前回記録31:37.770クリア
