#include <iostream>
#include <cstdio>
int main()
{
	int i=0,a,num=0,sum[1000]={0};
	char x[1000];
	while(1)
	{
		for(i=0;;i++)
		{
		scanf("%c",&x[i]);
		if(x[i]=='\n')break;
		sum[num]+=x[i]-'0';
		}
		if(x[0]=='0'&&x[1]=='\n')break;
		num++;
	}
	for(i=0;i<num;i++)
	{
		std::cout<<sum[i]<<std::endl;
	}
	return 0;
}