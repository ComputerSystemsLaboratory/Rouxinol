#include<iostream>
#include<algorithm>
using namespace std;
int q[1000001][3];
bool vis[1001][1001];
char c[1001][1001];
int main(){
	int h,w,n;
	cin>>h>>w>>n;
	int x,y;
	int ex,ey;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>c[i][j];
			if(c[i][j]=='S'){
				y=i;
				x=j;
			}
			if(c[i][j]=='1'){
				ey=i;
				ex=j;
			}
			if(c[i][j]=='X'){
				vis[i][j]=false;
			}
			else{
				vis[i][j]=true;
			}
		}
	}
	int ans=0;
	for(int r=0;r<n;r++){
	char skey=r+'0';
	char dkey=r+'1';
	if(r>0){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(c[i][j]==skey){
					y=i;
					x=j;
				}
				if(c[i][j]==dkey){
					ey=i;
					ex=j;
				}
				if(c[i][j]=='X'){
					vis[i][j]=false;
				}
				else{
					vis[i][j]=true;
				}
			}
		}
	}
	int head=0,tail=1;
	q[0][0]=x;
	q[0][1]=y;
	q[0][2]=0;
	vis[y][x]=false;
	int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
	int cnt=0;
	while(true){
		int x=q[head][0];
		int y=q[head][1];
		int len=q[head][2];
		if(x==ex&&y==ey){
			cnt=len;
			break;
		}
		for(int i=0;i<4;i++){
			if(x+dx[i]>=0&&x+dx[i]<w&&y+dy[i]>=0&&y+dy[i]<h){
				if(vis[y+dy[i]][x+dx[i]]==true){
					q[tail][0]=x+dx[i];
					q[tail][1]=y+dy[i];
					q[tail][2]=len+1;
					tail++;
					vis[y+dy[i]][x+dx[i]]=false;
				}
			}
		}
		head++;
	}
	ans+=cnt;
	}
	cout<<ans<<endl;
	return 0;
}