#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int f[110][110]={},h,w,ans;
int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};
string s[110];


void dfs(int y,int x,char c){
	if(y<0||h<=y||x<0||w<=x||s[y][x]!=c||f[y][x]) return;
	f[y][x]=1;
	rep(i,0,4){
		int ny=y+dy[i],nx=x+dx[i];
		dfs(ny,nx,c);
	}
	return;
}

int main(){
	while(cin>>h>>w){
		if(h==0 && w==0) break;
		rep(i,0,h){
			cin>>s[i];
			rep(j,0,w){
				f[i][j]=0;
			}
		}
		ans=0;
		rep(i,0,h){
			rep(j,0,w){
				if(f[i][j]==0){
					dfs(i,j,s[i][j]);
					ans++;
				}
			}
		}
		o(ans);
	}
}