#include<stdio.h>
void tkansu(int,int);
void skansu(int,int);
void akansu(int,int);

int h,w;
char map[101][101];
int flg[101][101];	//共有する宣言

int main(void)
{
	int i,j,k;	//共有しない宣言
	int cnt;
	
	scanf("%d %d",&h,&w);
	while(h!=0 && w!=0){
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				scanf(" %c",&map[i][j]);
			}
		}
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(map[i][j]=='@'){
					flg[i][j]=1;
				}
				else if(map[i][j]=='#'){
					flg[i][j]=2;
				}
				else if(map[i][j]=='*'){
					flg[i][j]=3;
				}
			}
		}
		cnt=0;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(flg[i][j]==1){
					flg[i][j]=0;
					tkansu(i,j);
					cnt++;
				}
				else if(flg[i][j]==2){
					flg[i][j]=0;
					skansu(i,j);
					cnt++;
				}
				else if(flg[i][j]==3){
					flg[i][j]=0;
					akansu(i,j);
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
		scanf("%d %d",&h,&w);
	}
	return 0;
}
void tkansu(int a,int b)
{
	if(a+1<h && flg[a+1][b]==1){
		flg[a+1][b]=0;
		tkansu(a+1,b);
	}
	if(a-1>=0 && flg[a-1][b]==1){
		flg[a-1][b]=0;
		tkansu(a-1,b);
	}
	if(b+1<w && flg[a][b+1]==1){
		flg[a][b+1]=0;
		tkansu(a,b+1);
	}
	if(b-1>=0 && flg[a][b-1]==1){
		flg[a][b-1]=0;
		tkansu(a,b-1);
	}
}
void skansu(int a,int b)
{
	if(a+1<h && flg[a+1][b]==2){
		flg[a+1][b]=0;
		skansu(a+1,b);
	}
	if(a-1>=0 && flg[a-1][b]==2){
		flg[a-1][b]=0;
		skansu(a-1,b);
	}
	if(b+1<w && flg[a][b+1]==2){
		flg[a][b+1]=0;
		skansu(a,b+1);
	}
	if(b-1>=0 && flg[a][b-1]==2){
		flg[a][b-1]=0;
		skansu(a,b-1);
	}
}
void akansu(int a,int b)
{
	if(a+1<h && flg[a+1][b]==3){
		flg[a+1][b]=0;
		akansu(a+1,b);
	}
	if(a-1>=0 && flg[a-1][b]==3){
		flg[a-1][b]=0;
		akansu(a-1,b);
	}
	if(b+1<w && flg[a][b+1]==3){
		flg[a][b+1]=0;
		akansu(a,b+1);
	}
	if(b-1>=0 && flg[a][b-1]==3){
		flg[a][b-1]=0;
		akansu(a,b-1);
	}
}