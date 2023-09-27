#include <cstdio>
#include <cstring>
#define max(a,b)((a)>=(b)?(a):(b))
bool osenbei[10][10000],work[10][10000];
int main() {
	int R,C;
	while(scanf("%d %d",&R,&C),R|C) {
		memset(osenbei,false,sizeof(osenbei));
		for(int i=0;i<R;i++) for(int j=0;j<C;j++) {
			scanf("%d",&osenbei[i][j]);
		}
		int ans=0;
		for(int i=0;i<(1<<R);i++) {
			memcpy(work,osenbei,sizeof(osenbei));
			for(int j=0;j<R;j++) {
				if(i&(1<<j))
					for(int k=0;k<C;k++) work[j][k]^=1;
			}
			int Count=0;
			for(int j=0;j<C;j++) {
				int count=0;
				for(int k=0;k<R;k++) count+=work[k][j];
				Count+=max(count,R-count);
			}
			ans=max(ans,Count);
		}
		printf("%d\n",ans);
	}
}