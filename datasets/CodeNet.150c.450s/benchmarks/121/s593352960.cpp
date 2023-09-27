#include<cstdio>
using namespace std;
void func(int,int);
int h,w;
char za[101][101];
int cnt;
int flg,flg1,flg2;
int main(void)
{
	int i,j;
	
	scanf("%d %d",&h,&w);
	while(!(h==0 && w==0)){
		for(i=0;i<h;i++){
			scanf("%s",za[i]);
		}
		cnt=0;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				flg=0;
				flg1=0;
				flg2=0;
				if(za[i][j]=='#'){
					cnt++;
					flg=1;
					func(i,j);
					
				}
				else if(za[i][j]=='*'){
					cnt++;
					flg1=1;
					func(i,j);
				}
				else if(za[i][j]=='@'){
					cnt++;
					flg2=1;
					func(i,j);
				}
			}
		}
		printf("%d\n",cnt);
		scanf("%d %d",&h,&w);
	}
	return 0;
}	
void func(int y,int x)
{
	int i,j;
	if(y+1<=h){
		if(flg==1){
			if(za[y+1][x]=='#'){
				za[y+1][x]='0';
				func(y+1,x);
			}
		}
		else if(flg1==1){
			if(za[y+1][x]=='*'){
				za[y+1][x]='0';
				func(y+1,x);
			}
		}
		else if(flg2==1){
			if(za[y+1][x]=='@'){
				za[y+1][x]='0';
				func(y+1,x);
			}
		}
	}
	if(x+1<=w){
		if(flg==1){
			if(za[y][x+1]=='#'){
				za[y][x+1]='0';
				func(y,x+1);
			}
		}
		else if(flg1==1){
			if(za[y][x+1]=='*'){
				za[y][x+1]='0';
				func(y,x+1);
			}
		}
		else if(flg2==1){
			if(za[y][x+1]=='@'){
				za[y][x+1]='0';
				func(y,x+1);
			}
		}
	}
	if(y-1>=0){
		if(flg==1){
			if(za[y-1][x]=='#'){
				za[y-1][x]='0';
				func(y-1,x);
			}
		}
		else if(flg1==1){
			if(za[y-1][x]=='*'){
				za[y-1][x]='0';
				func(y-1,x);
			}
		}
		else if(flg2==1){
			if(za[y-1][x]=='@'){
				za[y-1][x]='0';
				func(y-1,x);
			}
		}
	}
	if(x-1>=0){
		if(flg==1){
			if(za[y][x-1]=='#'){
				za[y][x-1]='0';
				func(y,x-1);
			}
		}
		else if(flg1==1){
			if(za[y][x-1]=='*'){
				za[y][x-1]='0';
				func(y,x-1);
			}
		}
		else if(flg2==1){
			if(za[y][x-1]=='@'){
				za[y][x-1]='0';
				func(y,x-1);
			}
		}
	}	
}