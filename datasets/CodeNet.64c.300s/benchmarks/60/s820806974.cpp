#include <cstdio>
using namespace std;
int main() {
	int a,b,n,x,y;
	while (scanf("%d %d",&a,&b)) {
		if (a==0&&b==0) break;
		scanf("%d",&n);
		int map[a][b];
		for (int i=0; i<a; i++) for (int j=0; j<b; j++) map[i][j]=-1;
		for (int i=0; i<n; i++) {
			scanf("%d %d",&x,&y);
			map[x-1][y-1]=0;
		}
		for (int i=0; i<a; i++) {
			for (int j=0; j<b; j++) {
				if (i==0&&j==0) {
					map[i][j]=1;
				} else if (map[i][j]==-1) {
					map[i][j]=0;
					if (i-1>=0) map[i][j]+=map[i-1][j];
					if (j-1>=0) map[i][j]+=map[i][j-1];
				}
			}
		}
		printf("%d\n",map[a-1][b-1]);
	}
}