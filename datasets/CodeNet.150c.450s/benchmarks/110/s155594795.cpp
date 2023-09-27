#include<iostream>
#include<queue>
#define x first
#define y second
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int h,w,k;
pair<int,int> p[12];
bool t[1010][1010],vis[1010][1010];
queue<pair<int,pair<int,int> > >Q;
int main(){
	cin>>h>>w>>k;
	rep(i,0,h)rep(j,0,w){
		t[i][j]=true;
		char z;cin>>z;
		if(z=='X')t[i][j]=0;
		if(z=='S')p[0]=make_pair(i,j);
		if(z>'0'&&z<='9')p[z-'0']=make_pair(i,j);
	}
	int a=0;
	rep(r,0,k){
		Q.push(make_pair(0,p[r]));
		rep(i,0,h)rep(j,0,w)vis[i][j]=0;vis[p[r].x][p[r].y]=1;
		while(1){
			int L=Q.front().x,Y=Q.front().y.x,X=Q.front().y.y;
			if(Y==p[r+1].x&&X==p[r+1].y){
				a+=L;
				break;
			}
			int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
			rep(i,0,4){
				int f=Y+dy[i],g=X+dx[i];
				if(f>=0&&f<h&&g>=0&&g<w){
					if(t[f][g]==1&&vis[f][g]==0){
						vis[f][g]=1;
						Q.push(make_pair(L+1,make_pair(f,g)));
					}
				}
			}
			Q.pop();
		}
		while(!Q.empty())Q.pop();
	}
	cout<<a<<endl;
	return 0;
}