#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

int main() {
	int a,b;
	while(scanf("%d %d",&a,&b),a|b) {
		int dp[17][17]={0};
		bool bad[16][16]={0};
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			int x,y;
			scanf("%d %d",&x,&y);
			bad[x-1][y-1]=1;
		}
		dp[0][0]=1;
		for(int i=0;i<a;i++) {
			for(int j=0;j<b;j++) {
				if(!bad[i+1][j]) dp[i+1][j]+=dp[i][j];
				if(!bad[i][j+1]) dp[i][j+1]+=dp[i][j];
			}
		}
		printf("%d\n",dp[a-1][b-1]);
	}
}