#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <functional>
#define inf 99999999
using namespace std;
typedef long long ll;
const int MAXN=1e9+10;
const int MAX=100+10;
char mapp[MAX][MAX];
int book[MAX][MAX];
int n,m,ans=0;
int d[20][2]={-1,0,1,0,0,-1,0,1};
void dfs(int x,int y,char ch){
	for(int i=0;i<4;i++){
		int xt=x+d[i][0];
		int yt=y+d[i][1];
		if(xt>=0&&xt<n&&yt>=0&&yt<m&&book[xt][yt]==0&&mapp[xt][yt]==ch){
			book[xt][yt]=1;
			dfs(xt,yt,ch);
		}
	}
}
int main(){
   #ifdef SIYU
   freopen("in.txt","r",stdin);
   #endif // SIYU
   //ios::sync_with_stdio(false);
   while(cin>>n>>m){
   		if(n==0&&n==m)
   			break;
   		ans=0;
	   memset(book,0,sizeof(book));
	   for(int i=0;i<n;i++){
	   		cin>>mapp[i];
	   }
	   for(int i=0;i<n;i++){
	   		for(int j=0;j<m;j++){
	   			if(book[i][j]==0){
	   				ans++;
	   				dfs(i,j,mapp[i][j]);
	   			}
	   		}
	   }
	   cout<<ans<<endl;
	}
   return 0;
}