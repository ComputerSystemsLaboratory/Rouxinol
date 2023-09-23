#include<cstdio>


using namespace std;
int main(void)
{
	int a[101]= {0},kari,most = 0;
	for(int i = 0;;i++)
	{
		if(scanf("%d",&kari)==EOF) break;
		a[kari] += 1;
		if(a[kari] >= most) most = a[kari];
	}
	for(int i = 0;i < 100;i++)
	{
		if(most == a[i]) printf("%d\n",i);
	}


	return 0;
}