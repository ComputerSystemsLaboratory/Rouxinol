#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;
bool map[15][10005];
int make_ans(){
	int ans=0;
	for(int i=1;i<=m;i++){
		int sum1=0,sum2=0;
		for(int j=1;j<=n;j++)
			if(map[j][i])
				sum1++;
			else
				sum2++;
		ans+=max(sum1,sum2);
	}
	return ans;
}
void fanzhuan(int x){
	for(int i=1;i<=m;i++)
		map[x][i]=!map[x][i];
}
int dfs(int x){
	if(x>n)
		return make_ans();
	int ans=0;
	fanzhuan(x);
	ans=max(ans,dfs(x+1));
	fanzhuan(x);
	ans=max(ans,dfs(x+1));
	return ans;
}
int main()
{
	scanf("%d%d",&n,&m);
	while(n||m){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++){
				int a;
				scanf("%d",&a);
				map[i][j]=(a==1);
			}
		printf("%d\n",dfs(1));
		scanf("%d%d",&n,&m);
	}
}