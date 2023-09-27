#include<stdio.h>
bool field[16][16];
int solve(int row,int col){
	int ret=0;
	if(row+col==0)return 1;
	if(row>0&&field[row-1][col])ret+=solve(row-1,col);
	if(col>0&&field[row][col-1])ret+=solve(row,col-1);
	return ret;
}
int main(){
	while(1){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a+b==0)return a+b;
		for(int i=0;i<a;i++)for(int j=0;j<b;j++)field[i][j]=true;
		int c;
		scanf("%d",&c);
		for(int i=0;i<c;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			x--;
			y--;
			field[x][y]=false;
		}
		printf("%d\n",solve(a-1,b-1));
	}
}