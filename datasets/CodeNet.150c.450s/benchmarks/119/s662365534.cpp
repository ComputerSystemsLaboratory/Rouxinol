#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<numeric>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0;i<((int)(n));i++)
#define reg(i,a,b) for(int i = ((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i = ((int)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(int i = ((int)(b));i>=((int)(a));i--)
typedef long long ll;
typedef pair<ll, ll> mp;

//???

int w,h,field[50][50],ans;

void dfs(int x,int y){
	if(x<0 || x>=w || y<0 || y>=h)return;
	if(field[x][y]==0)return;
	field[x][y]=0;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	dfs(x+1,y+1);
	dfs(x-1,y-1);
	dfs(x-1,y+1);
	dfs(x+1,y-1);
}

int main(void){
	while(1){
		ans=0;
		cin>>w>>h;
		if(w==0 && h==0)break;
		rep(i,h){
			rep(j,w){
				cin>>field[j][i];
			}
		}
		rep(i,h){
			rep(j,w){
				if(field[j][i]==1){
					dfs(j,i);
					ans++;
					// cout<<i<<","<<j<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}