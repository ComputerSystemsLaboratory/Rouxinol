#include<cstdio>
#include<functional>
#include<algorithm>
#define M 2000000000
using namespace std;
int main(void)
{
	int nn[50001],syu[20];
	int i,j,n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++) scanf("%d",&syu[i]);
	for(i=0;i<=n;i++) nn[i]=M;
	nn[0]=0;
	for(i=0;i<m;i++){
		for(j=0;j<=n;j++){
			if(j+syu[i]>n) break;
			if(nn[j]!=M){
				nn[syu[i]+j]=min(nn[syu[i]+j],nn[j]+1);
			}
		}
	}
	printf("%d\n",nn[n]);
	return 0;
}