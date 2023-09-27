#include <stdio.h>
#define LL long long
#define maxn 100010
LL sum,a[maxn],cnt[maxn];
int main(){
	int i,n,q,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%lld",&a[i]),sum+=a[i],cnt[a[i]]++;
	//printf("sum=%lld\n",sum);
	scanf("%d",&q);
	while(q--){
		scanf("%d%d",&b,&c);
		//printf("cnt[%d]=%lld cnt[%d]=%lld\n",b,cnt[b],c,cnt[c]);
		sum-=cnt[b]*b;//删除旧数据
		//printf("sum=%lld\n",sum);
		sum+=cnt[b]*c;//加上新数据
		//printf("sum=%lld\n",sum);
		cnt[c]+=cnt[b],cnt[b]=0;//更新新数据数量
		printf("%lld\n",sum);
	}
	return 0;
}