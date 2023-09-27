#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int sum;
	char ch[10000];
	while(1)
	{
		scanf("%s",ch);
		if(ch[0]=='0') break;
		sum=0;
		for(int i=0;i<strlen(ch);i++)
		{
			sum=sum+(ch[i]-'0');
		}
		printf("%d\n",sum);
	}
	
}