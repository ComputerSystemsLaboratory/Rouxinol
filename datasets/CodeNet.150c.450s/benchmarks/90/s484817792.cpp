#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
using namespace std;
int main(void)
{
	int n,cnt[100];
	int i,j,x,max;
	x=0;
	for(i=0;i<101;i++) cnt[i]=0;
	while(scanf("%d",&n)!=EOF) {
		cnt[n]++;
		x++;
	}
	max=-1;
	for(i=0;i<x;i++) {
		if(max<cnt[i]) max=cnt[i];
	}
	for(i=0;i<x;i++) {
		if(max==cnt[i]) printf("%d\n",i);
	}
	return 0;
}