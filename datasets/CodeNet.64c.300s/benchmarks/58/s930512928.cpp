#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=105;
char m[maxn][maxn];
int flag[maxn][maxn];
int count;
int n;int h;
int step[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int dfs(int a,int b){
	if(flag[a][b])return 0;
	flag[a][b]=count;
	char pre=m[a][b];
	for(int i=0;i<4;i++){
		int nexta,nextb;
		nexta=a+step[i][0];nextb=b+step[i][1];
		if(nexta>=0&&nexta<n&&nextb>=0&&nextb<h&&m[nexta][nextb]==pre){
			dfs(nexta,nextb);
		}
	}
	return 1;
}
int main(void){
	while(scanf("%d%d",&n,&h)!=EOF){
		if(n==0&&h==0)break;
		for(int i=0;i<n;i++){
			scanf("%s",m[i]);
		}
//		for(int i=0;i<n;i++){
//			printf("%s\n",m[i]);
//		}
		count=1;
		memset(flag,0,sizeof(flag));
		for(int i=0;i<n;i++){
			for(int j=0;j<h;j++){
				if(dfs(i,j)==1)count++;
			}
		}
//		for(int i=0;i<n;i++){
//			for(int j=0;j<h;j++){
//				printf("%d ",flag[i][j]);
//			}
//			printf("\n");
//		}
		printf("%d\n",count-1);
	}
	return 0;
}
