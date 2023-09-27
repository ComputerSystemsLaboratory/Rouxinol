#include <cstdio>
#include <algorithm>
using namespace std;
int cost[10][10];
int main() {
	int n;
	while(scanf("%d",&n),n) {
		for(int i=0;i<10;i++) {
			for(int j=0;j<10;j++) {
				cost[i][j]=cost[j][i]=(i==j)?0:(1<<27);
			}
		}
		int m=0;
		for(int i=0;i<n;i++) {
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			cost[a][b]=cost[b][a]=c;
			m=max(m,max(a,b));
		}
		for(int k=0;k<=m;k++) {
			for(int i=0;i<=m;i++) {
				for(int j=0;j<=m;j++) {
					cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
				}
			}
		}
		int A,B=(1<<27);
		for(int i=0;i<=m;i++) {
			int sum=0;
			for(int j=0;j<=m;j++) {
				sum+=cost[i][j];
			}
			if(B>sum)A=i,B=sum;
		}
		printf("%d %d\n",A,B);
	}
}