#include<cstdio>
#include<algorithm>

int ans;
int Min=0x7fffffff;

int main(){
	int n,a;
	while(scanf("%d",&n)!=EOF){
		Min=0x7fffffff;
		ans=-Min;
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			ans=std::max(ans,a-Min);
			Min=std::min(Min,a);
		}
		printf("%d\n",ans);
	}
	return 0;
}
