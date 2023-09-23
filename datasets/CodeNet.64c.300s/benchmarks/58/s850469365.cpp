#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<stack>
#include<cstdio>
using namespace std;

#define rep(i,x) for(int i=0;i<x;i++)
#define rep1(i,x) for(int i=1;i<=x;i++)
#define sor(v) sort(v.begin(),v.end())
#define min_3(a,b,c) min(a,min(b,c))
#define max_3(a,b,c) max(a,max(b,c))

const int INF=1000000000;
const int dre_4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
const int dre_8[8][2]={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};

char a[110][110];

void dfs(int x,int y,char c){
	if(a[x][y]!=c)return;
	a[x][y]='.';
	
	rep(i,4){
		dfs(x+dre_4[i][0],y+dre_4[i][1],c);
	}
}

int main(){
	while(1){
		int h,w;
		cin>>h>>w; if(h==0&&w==0)break;
		
		rep(i,110)rep(j,110)a[i][j]='.';
		rep1(i,h){
			scanf("\n");
			rep1(j,w){
				cin>>a[i][j];
			}
		}
		
		int ret=0;
		rep1(i,h){
			rep1(j,w){
				if(a[i][j]!='.'){
					dfs(i,j,a[i][j]);
					ret++;
				}
			}
		}
		
		cout<<ret<<endl;
	}
}