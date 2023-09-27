#include<cstdio>

int n;
double point[4][2];

int main()
{
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%lf",&point[i][j]);
		}
	}

	if((point[0][0]-point[1][0])*(point[2][1]-point[3][1])==(point[0][1]-point[1][1])*(point[2][0]-point[3][0])||(point[0][0]-point[1][0])*(point[2][1]-point[3][1])==(point[0][1]-point[1][1])*(point[2][0]-point[3][0]))
	{
		printf("YES\n");
	}
	else printf("NO\n");
	}
	return 0;
}