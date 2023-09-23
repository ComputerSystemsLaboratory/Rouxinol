#include <iostream>
using namespace std;
int H,W,ans;
char f[100][100];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
void paint(int x,int y){
	int a,b,c;
	c=f[x][y];
	f[x][y]='-';
	for(int i=0;i<4;i++){
		a=x+dx[i];
		b=y+dy[i];
		if(0<=a&&a<W&&0<=b&&b<H&&f[a][b]==c){
			paint(a,b);
		}
	}
}
int main()
{
	while(true){
		cin>>H>>W;
		if(!H&&!W)break;
		ans=0;
		for(int i=0;i<H;i++)
			for(int j=0;j<W;j++)cin>>f[j][i];
		for(int i=0;i<H;i++)
			for(int j=0;j<W;j++){
				if(f[j][i]!='-'){
					paint(j,i);
					ans++;
				}
		}
		cout<<ans<<endl;
	}
    return 0;
}