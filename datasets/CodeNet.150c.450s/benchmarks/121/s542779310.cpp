#include <cstdio>
#include <cstring>
#define MAX_N 105

char field[MAX_N][MAX_N];
int H,W;
bool visited[MAX_N][MAX_N];

void DFS(int i,int j,char fruit){
	//printf("i=%d ,j=%d fruit = %c \n",i,j,fruit);
	visited[i][j] = true;
	if(j+1<W && field[i][j+1]==fruit && !visited[i][j+1])
		DFS(i,j+1,fruit);
	if(i+1<H && field[i+1][j]==fruit && !visited[i+1][j])
		DFS(i+1,j,fruit);
	if(j-1>=0 && field[i][j-1]==fruit && !visited[i][j-1])
		DFS(i,j-1,fruit);
	if(i-1>=0 && field[i-1][j]==fruit && !visited[i-1][j])
		DFS(i-1,j,fruit);
	return;
}	


int main()
{
	//freopen("in","r",stdin);
	while(~scanf("%d %d ",&H,&W) && !(H==0 && W==0) ){
		int ans=0;
		memset(visited,false,sizeof(visited));
		memset(field,0,sizeof(field));
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				scanf("%c ",&field[i][j]);
			}
		}
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(!visited[i][j]){
					//printf("f = %c\n",field[i][j]);
					DFS(i,j,field[i][j]);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
		/*
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				printf("%c",field[i][j]);
			}
			puts("");
		}
		*/
	}

	return 0;
}