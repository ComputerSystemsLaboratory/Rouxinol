#include <cstdio>
#include <cstring>
using namespace std;

int n,m,a[50][50],b[50][50],ans;
bool inRange(int z,int l,int r){
	return z>=l&&z<r;
}
void fill(int x,int y){
	if(!a[x][y]||b[x][y])return;
	b[x][y]=true;
	for(int xx=-1;xx<=1;xx++)if(inRange(x+xx,0,n)){
		for(int yy=-1;yy<=1;yy++)if(inRange(y+yy,0,m)){
			fill(x+xx,y+yy);
		}
	}
}
int main(){
	while(scanf("%d%d",&m,&n),n*m){
		ans=0;
		memset(b,0,sizeof(int)*2500);
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(!b[i][j]&&a[i][j])
					ans++,fill(i,j);
		printf("%d\n",ans);
	}

	return 0;
}