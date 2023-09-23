#include<cstdio>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<queue>



using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
const int INF=1001001001;
int map[10][10000];//0????????????



int main(){
	while(1){
		int R,C;
		scanf("%d %d",&R,&C);
		if(R==0&&C==0)break;
		rep(i,R)rep(j,C){scanf("%d",&map[i][j]);}
		int ans=0;
		for(int i=0;i < 1<<R ;i++){
			int sans=0;
			rep(k,C){
				int rans=0;
				rep(j,R){if( map[j][k]==0 && (i>>j)%2==0 || map[j][k]==1&& (i>>j)%2==1)rans++;}
				sans+=max(rans,R-rans);
			}//????????¨????????°?????°????????????????????????
			ans=max(ans,sans);
		}
		printf("%d\n",ans);
	}
}