#include<cstdio>
using namespace std;
void func(int,int);
int a,b;
int sima[51][51];
int cnt;
int main(void)
{
	int i,j,x,y;
	scanf("%d",&a);
	scanf("%d",&b);
	while(!(b==0 && a==0)){
		
		for(i=0;i<b;i++){
			for(j=0;j<a;j++){
				scanf("%d",&sima[i][j]);
			}
		}
		cnt=0;
		for(i=0;i<b;i++){
			for(j=0;j<a;j++){
				if(sima[i][j]==1){
					func(i,j);
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
		scanf("%d",&a);
		scanf("%d",&b);
	}
	return 0;
}
void func(int y,int x)
{
	if(y-1>=0){
		if(sima[y-1][x]==1){
			sima[y-1][x]=0;
			func(y-1,x);
		}
	}
	if(x-1>=0){
		if(sima[y][x-1]==1){
			sima[y][x-1]=0;
			func(y,x-1);	
		}
	}
	if(y+1<=b){
		if(sima[y+1][x]==1){
			sima[y+1][x]=0;
			func(y+1,x);
		}
	}
	if(x+1<=a){
		if(sima[y][x+1]==1){
			sima[y][x+1]=0;
			func(y,x+1);
		}
	}
	if(y-1>=0 && x+1<=a){
		if(sima[y-1][x+1]==1){
			sima[y-1][x+1]=0;
			func(y-1,x+1);
		}
	}
	if(y-1>=0 && x-1>=0){
		if(sima[y-1][x-1]==1){
			sima[y-1][x-1]=0;
			func(y-1,x-1);
		}
	}
	if(y+1<=b && x+1<=a){
		if(sima[y+1][x+1]==1){
			sima[y+1][x+1]=0;
			func(y+1,x+1);
		}
	}
	if(y+1<=b && x-1>=0){
		if(sima[y+1][x-1]==1){
			sima[y+1][x-1]=0;
			func(y+1,x-1);
		}
	}
}
	