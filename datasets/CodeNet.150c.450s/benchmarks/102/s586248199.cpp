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

//?????????WA????????????
//????????????????????£??????

int W,H,f[21][21],ans[1000],cnt=0,sx,sy;
string s,t;

void find(int x,int y){
	if(x>=W || x<0 || y>=H || y<0)return;
	if(f[x][y]==0)return;
	f[x][y]=0;
	ans[cnt]++;
	find(x+1,y);
	find(x-1,y);
	find(x,y+1);
	find(x,y-1);
}

int main(void){
	while(1){
		cin>>W>>H;
		if(W==0 && H==0)break;
		ans[cnt]=0;
		rep(i,H){
			cin>>s;
			rep(j,W){
				t = s[j];
				if(t==".")f[j][i]=1;
				if(t=="#")f[j][i]=0;
				if(t=="@"){
					f[j][i]=1;
					sx=j;
					sy=i;
				}
			}
		}
		find(sx,sy);
		cnt++;
	}
	rep(i,cnt)cout<<ans[i]<<endl;
	return 0;
}