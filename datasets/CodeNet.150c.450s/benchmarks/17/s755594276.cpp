#include<cstdio>
#include<algorithm>

using namespace std;

int line[5];

int main()
{
	for(int i=0;i<5;i++)scanf("%d",&line[i]);
	sort(line,line+5);
	for(int i=4;i>=0;i--)
	{
		printf("%d",line[i]);
		if(i!=0)printf(" ");
	}
	printf("\n");
	return 0;
}