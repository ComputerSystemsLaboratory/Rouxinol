#include <bits/stdc++.h>
using namespace std;
const int inf=1<<30;
int dp[9][1000][1000];
int mx[]={1,0,-1,0},my[]={0,1,0,-1};
int main(){
	int h,w,n;	cin>>h>>w>>n;
	vector<string> s(h);
	int sx,sy;
	for(int i=0;i<h;i++){
		cin>>s[i];
		for(int j=0;j<w;j++){
			if(s[i][j]=='S'){
				sx=j,sy=i;
				break;
			}
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<1000;j++){
			for(int k=0;k<1000;k++)	dp[i][j][k]=inf;
		}
	}
	queue<pair<int,int>> q;
	int ans=0;
	for(int i=0;i<n;i++){
		dp[i][sy][sx]=0;
		q.push(make_pair(sy,sx));
		while(!q.empty()){
			auto now=q.front();	q.pop();
			int y=now.first,x=now.second;
			for(int j=0;j<4;j++){
				int nx=x+mx[j],ny=y+my[j];
				if(nx<0||w<=nx||ny<0||h<=ny)	continue;
				if(s[ny][nx]=='X')	continue;
				if(s[ny][nx]-'0'==i+1){
					sy=ny;	sx=nx;
					ans+=dp[i][y][x]+1;
					while(!q.empty())	q.pop();
					break;
				}
				if(dp[i][ny][nx]==inf){
					dp[i][ny][nx]=dp[i][y][x]+1;
					q.push(make_pair(ny,nx));
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}