#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
using namespace std;
long long int sum[100][21],cnt;
int main(void)
{
	int n,i,j;
	int suu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&suu[i]);
	for(i=0;i<=n;i++){
		for(j=0;j<21;j++) {
			sum[i][j]=0;
		}
	}
	sum[0][suu[0]]=1;
	for(i=1;i<n-1;i++) {
		for(j=0;j<21;j++) {
			if(j-suu[i]>=0) sum[i][j-suu[i]]+=sum[i-1][j];
			if(j+suu[i]<=20) sum[i][j+suu[i]]+=sum[i-1][j];	
		}
//		printf("\n");
	}
/*	for(i=0;i<21;i++) printf("%d ",i);
	printf("\n");
	for(i=0;i<n;i++) {
		for(j=0;j<21;j++) {
			if(j<=10) printf("%2lld ",sum[i][j]);
			else printf("%2lld ",sum[i][j]);
		}
		printf("\n");
	}*/
	printf("%lld\n",sum[n-2][suu[n-1]]);
	return 0;
}	