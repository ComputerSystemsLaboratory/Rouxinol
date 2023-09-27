#include<cstdio>
using namespace std;
void func(int,int);
int a,b;
int x,y;
int cnt;
int kouzi[17][17];

int main(void)
{
	int i,j,n;
	scanf("%d %d",&a,&b);
	while(a!=0 && a!=0){
		for(i=1;i<=b;i++){
			for(j=1;j<=a;j++){
				kouzi[i][j]=0;
			}
		}
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			kouzi[y][x]=1;
		}
		cnt=0;
		func(1,1);
		printf("%d\n",cnt);
		
		scanf("%d %d",&a,&b);
		
	}
	return 0;
}
void func(int y,int x)
{
	if(a==x && b==y){
		cnt++;
	}
	else{
		if(kouzi[y][x+1]==0 && x+1<=a){
			func(y,x+1);
		}
		if(kouzi[y+1][x]==0 && y+1<=b){
			func(y+1,x);
		}
	}
}
	