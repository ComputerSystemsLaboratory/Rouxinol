#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;
int main(void)
{
	int n;
	double x[4],y[4];
	double k[2];
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < 4;j++) scanf("%lf%lf",&x[j],&y[j]);
		k[0] = (y[0]-y[1])/(x[0]-x[1]);
		k[1] = (y[2]-y[3])/(x[2]-x[3]);
		if(k[0] == k[1]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}