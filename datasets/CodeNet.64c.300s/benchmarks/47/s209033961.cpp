#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
	int a[110]={};
	int x;
	while(scanf("%d",&x)!=EOF)a[x]++;
	int m=-1;
	for(int i=1;i<=100;i++)m=max(m,a[i]);

		for(int i=1;i<=100;i++)if(a[i]==m)cout<<i<<endl;
			

	return 0;
}