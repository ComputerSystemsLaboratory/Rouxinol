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
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

int mode[200];
int z,maxs;

int main()
{
	maxs=0;
	for(int a=0;a<199;a++)
	{
		mode[a]=0;
	}
	while(scanf("%d",&z)!=EOF)
	{
		if(z<0)
		{
			break;
		}
		mode[z]++;
		maxs=max(maxs,mode[z]);
	}
	for(int a=0;a<199;a++)
	{
		if(mode[a]==maxs)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}