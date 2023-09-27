#include<cstdio>
using namespace std;
int main(void)
{
	int a[4],b[4],hit = 0,blow = 0;
	while(1)
	{
		for(int i = 0;i<4;i++)
		{
			if(scanf("%d",&a[i]) == EOF) goto kitune;
		}
		for(int i = 0;i < 4;i++)
		{
			scanf("%d",&b[i]);
		}

		for(int i = 0;i<4;i++)
		{
			if(a[i] == b[i]) hit += 1;
		}
		for(int i = 0;i<4;i++)
		{
			for(int j = 0;j < 4;j++)
			{
				if(i!= j && a[i] == b[j]) blow += 1;
			}
		}
		printf("%d %d\n",hit,blow);
		hit = 0;
		blow = 0;
	}
	kitune:;
	return 0;
}