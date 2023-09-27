#include<stdio.h>
int count;
void bfs(char (*sz) [101],int r,int c,int n,int m,char k){
	if(r<0||r>=n||c<0||c>=m)return ;
	if(sz[r][c]=='.'||sz[r][c]!=k)return ;
	sz[r][c]='.';
	for(int dr=-1;dr<=1;dr++)
	for(int dc=-1;dc<=1;dc++){
		if((dr!=0||dc!=0)&&dr*dc==0)bfs(sz,dr+r,dc+c,n,m,k);
	}
	return;
}
int main(){
	char sz[101][101];
	int a,b;
	while(scanf("%d%d",&a,&b)==2&&a*b){
		count=0;
		getchar();
		for(int i=0;i<a;i++)
		scanf("%s",sz[i]);
		
		for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(sz[i][j]=='@'||sz[i][j]=='#'||sz[i][j]=='*')
			{
			bfs(sz,i,j,a,b,sz[i][j]);
			count++;
		}
		}
		}
		printf("%d\n",count);
	}
	return 0;
} 