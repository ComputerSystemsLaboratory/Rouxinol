#include <cstdio>
#include <cstdlib>

using namespace std;

int hasil,input; 

int main()
{
	while(scanf("%d",&input) != EOF)
	{	
	hasil=0;
	for (int a=0;a<=9;a++)
	{
		for (int b=0;b<=9;b++)
		{
			for (int c=0; c<=9; c++)
			{
				for (int d=0;d<=9; d++)
				{
					if(input==a+b+c+d)
					{
						hasil++;
					}
				}
			}
		}
	}
	printf("%d\n",hasil);
	}
	return 0;
}