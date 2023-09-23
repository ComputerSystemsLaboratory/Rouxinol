#include<cstdio>
#include<algorithm>
using namespace std;
int main(void)
{
	int d;
	int menseki;
	while(scanf("%d",&d) !=EOF)
	{
		menseki = 0;
		for(int i = 0;i<600;i+=d)
		{
			menseki+=i*i*d;
		}
		printf("%d\n",menseki);

	}
	return 0;
}