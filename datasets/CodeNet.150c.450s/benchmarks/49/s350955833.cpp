#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	while(scanf("%d",&a)&&a!=0)
	{
		int sum=0;
		int min=1000;
		int max=0;
		for(int i=0;i<a;i++)
		{
			int tmp;
			scanf("%d",&tmp);
			sum+=tmp;
			if(min>tmp) min = tmp;
			if(max<tmp) max = tmp;
		}	
		printf("%d\n",(sum-min-max)/(a-2));
	}
	return 0;
}