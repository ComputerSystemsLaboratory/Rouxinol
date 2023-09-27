#include<cstdio>


using namespace std;
int main(void)
{
	double a;
	double b = 1;
	scanf("%lf",&a);
	for(double i = 1;i <= a;i++)
	{
		b = b * i;
	}
	printf("%.0lf\n",b);
	return 0;
}