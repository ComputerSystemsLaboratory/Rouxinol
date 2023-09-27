#include<stdio.h>

#define N 100
char a[N][N];
int rows,cols;

int dfs(int curX,int curY, char curChar){
	if(curX < 0 || curX >= rows)return 0;
	if(curY < 0 || curY >= cols)return 0;
	if(a[curX][curY] != curChar)return 0;

	a[curX][curY] = '0';
	dfs(curX-1,curY,curChar);
	dfs(curX+1,curY,curChar);
	dfs(curX,curY-1,curChar);
	dfs(curX,curY+1,curChar);
	return 0;
}

int main(){
	while(scanf("%d%d",&rows,&cols),rows || cols){
		int count = 0;
		int i,j;
		getchar();
		for(i = 0; i < rows; i++){
			for(j = 0; j < cols; j++)
				scanf("%c",&a[i][j]);
			getchar();
		}
		for( i = 0; i < rows; i++)
			for(j = 0; j < cols; j++)
				if(a[i][j] != '0'){dfs(i,j,a[i][j]);count++;}

		printf("%d\n",count);
	}
	return 0;
}