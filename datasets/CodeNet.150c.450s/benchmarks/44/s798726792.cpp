#include <cstdio>
using namespace std;

int main(void)
{
	int n, hit = 0 , blow = 0;
	int num1[4], num2[4];
	while(scanf("%d",&num1[0]) != EOF){
		hit = 0;
		blow = 0;
		for(int f1 = 1; f1 < 4; f1++)
		{
			scanf("%d", &num1[f1]);
		}
		for(int f1 = 0; f1 < 4; f1++)
		{
			scanf("%d", &num2[f1]);
		}
		for(int f1 = 0; f1 < 4; f1++)
		{
			if(num1[f1] == num2[f1])
			{
				hit++;
			}
			else
			{
				for(int f2 = 0; f2 < 4; f2++)
				{
					if(num1[f1] == num2[f2])
					{
						blow++;
						break;
					}
				}
			}
		}
	printf("%d %d\n", hit, blow);
	}
	return 0;
}