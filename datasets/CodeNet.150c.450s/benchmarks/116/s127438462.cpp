#include <cstdio>
#include <cstring>
#define max(a,b) ((a)>=(b)?(a):(b))
int s[100001],n,k;
int main() {
	while(scanf("%d %d",&n,&k),n|k) {
		int ans=0;
		memset(s,0,sizeof(s));
		for(int i=1;i<=n;i++) scanf("%d",&s[i]),s[i]+=s[i-1];
		for(int i=1;i<=(n-k);i++) ans=max(ans,s[i+k-1]-s[i-1]);
		printf("%d\n",ans);
	}
}