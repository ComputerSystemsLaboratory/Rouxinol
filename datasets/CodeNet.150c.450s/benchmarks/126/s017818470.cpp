#include <queue>
#include <cstdio>

using namespace std;

int main()
{
	int dp[18][18],n,a,b,kozix,koziy;
	bool map[18][18];

	while(scanf("%d %d",&a,&b) && a || b){
		for(int i = 0; i <= a+1; i++){
			for(int j = 0; j <= b+1; j++){
				dp[i][j] = 0;
				map[i][j] = true;
			}
		}
		for(int i = 0; i <= a+1; i++){
			map[i][0] = false;
			map[i][b+1] = false;
		}
		for(int i = 0; i <= b+1; i++){
			map[0][i] = false;
			map[a+1][i] = false;
		}
		
		scanf("%d",&n);
		for(int i = 0; i < n; i++){
			scanf("%d %d",&kozix,&koziy);
			map[kozix][koziy] = false;
		}
		
		dp[1][1] = 1;
		for(int y = 1; y <= b; y++){
			for(int x = 1; x <= a; x++){
				if(map[x][y]){
					dp[x][y] += dp[x-1][y];
					dp[x][y] += dp[x][y-1];
				}
			}
		}
		
		printf("%d\n",dp[a][b]);
	}
	

	return 0;
}