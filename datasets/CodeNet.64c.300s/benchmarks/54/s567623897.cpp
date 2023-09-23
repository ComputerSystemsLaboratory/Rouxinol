#include<cstdio>
#include<algorithm>
using namespace std;
int main(void)
{
	int n,i,j,a;
	long long cnt[102][22]={0};
	scanf("%d",&n);
	scanf("%d",&a);
	cnt[2][a]=1;
	for(i=2;i<=n;i++){
		scanf("%d",&a);
		for(j=0;j<=20;j++){
			if(j+a<=20){
				cnt[i+1][j+a]+=cnt[i][j];
			}
			if(j-a>=0){
				cnt[i+1][j-a]+=cnt[i][j];
			}
		}
	}
	printf("%lld\n",cnt[n][a]);
	return 0;
}
