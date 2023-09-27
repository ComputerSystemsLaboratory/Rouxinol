#include <bits/stdc++.h>
using namespace std;
int h,w,n,Min,f[1001][1001],fx[10],fy[10];
char s[1001][1001];
const int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
int bfs(int sx,int sy,int gx,int gy)
{
	memset(f,0,sizeof(f));
	queue<int>x,y;
	x.push(sx);y.push(sy);f[sx][sy]=1;
	while(!x.empty()){
		int hx=x.front(),hy=y.front();
		x.pop();y.pop();
		if(hx==gx&&hy==gy)break;
		for(int i=0;i<4;i++){
			int nx=hx+dx[i],ny=hy+dy[i];
			if(nx>=1&&nx<=h&&ny>=1&&ny<=w&&s[nx][ny]!='X'&&!f[nx][ny]){
				f[nx][ny]=f[hx][hy]+1;
				x.push(nx);y.push(ny);
			}
		}
	}
	return f[gx][gy]-1;
}
int main()
{
#ifdef debug
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
	cin>>h>>w>>n;
	for(int i=1;i<=h;i++)
	 for(int j=1;j<=w;j++){
	 	cin>>s[i][j];
	 	if(s[i][j]=='S'){
	 		fx[0]=i;
	 		fy[0]=j;
		 }
		 else if(s[i][j]>='1'&&s[i][j]<='9'){
		 	fx[s[i][j]-'0']=i;
		 	fy[s[i][j]-'0']=j;
		 }
	 }
	for(int i=1;i<=n;i++)
		Min+=bfs(fx[i-1],fy[i-1],fx[i],fy[i]);
	cout<<Min<<endl;
	return 0;
}