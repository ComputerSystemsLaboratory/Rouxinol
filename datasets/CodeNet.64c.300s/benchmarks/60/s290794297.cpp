#include<cstdio>
#include<algorithm>
using namespace std;
int tate,yoko,jikosu,ans;
int jikoy,jikox,x,y;
int koko[41][41];
void fanc(int,int);
	int main(void){
		int j,i,z=0;
		while(1){
			ans=z;
		scanf("%d %d",&yoko,&tate);
		if(yoko==0&&tate==0)
			break;
		scanf("%d",&jikosu);
		for(i=0;i<41;i++){
			for(j=0;j<41;j++)
				koko[i][j]=0;
		}
		for(i=0;i<jikosu;i++){
			scanf("%d %d",&jikoy,&jikox);
			koko[jikox-1][jikoy-1]=1;
		}
		x=0;
		y=0;
		fanc(x, y);
		printf("%d\n",ans);
		}
		return 0;
	}
	void fanc(int x, int y){
		int i,j,a,b;
		if(x+1<tate){
			if(koko[x+1][y]==0){
				fanc(x+1,y);
			}
		}
		if(y+1<yoko){
			if(koko[x][y+1]==0){
				fanc(x,y+1);
			}
		}
		if(x==tate-1 && y==yoko-1){
			ans++;
		}
	}