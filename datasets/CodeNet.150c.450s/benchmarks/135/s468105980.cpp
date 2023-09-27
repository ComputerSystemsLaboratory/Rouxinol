#include<stdio.h>
#include<string.h>
int main(){
	int n,m;
	int h[1501],w[1501];
	static int width[1000*1501];
	int i,j;
	h[0]=w[0]=0;
	while(scanf("%d%d",&n,&m),n|m){
		int ans=0;
		for(i=1;i<=n;i++){
			scanf("%d",h+i);
			h[i] += h[i-1];
		}
		for(i=1;i<=m;i++){
			scanf("%d",w+i);
			w[i] += w[i-1];
		}
		memset(width,0,sizeof(width));
		for(i=0;i<=m;i++)
			for(j=i+1;j<=m;j++)
				width[w[j]-w[i]]++;
		for(i=0;i<=n;i++)
			for(j=i+1;j<=n;j++)
				ans += width[h[j]-h[i]];
		printf("%d\n",ans);
	}
	return 0;
}