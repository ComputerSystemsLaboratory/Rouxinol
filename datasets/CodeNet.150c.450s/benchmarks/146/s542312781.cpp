#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

double x1,x2,x3,x4,y2,y3,y4,y5;//y1 crash with include cmath...
double g1,g2;
int tc;

int main()
{
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y5,&x2,&y2,&x3,&y3,&x4,&y4);
		/*g1=(y2-y5)/(x2-x1); //seeems broken with infinity loll
		g2=(y4-y3)/(x4-x3);
		printf("%.2lf,%.2lf\n",g1,g2);*/
		if(abs((x2-x1)*(y4-y3)-(x4-x3)*(y2-y5))<1e-10)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
	}
	return 0;
}