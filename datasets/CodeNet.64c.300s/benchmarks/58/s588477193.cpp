/**
 * AOJ 0118
 * 2016/8/14 by xuesen
 * Property Distribution
 */
#include <iostream>
#include <fstream>
using namespace std;
int h,w;
#define max_n 105
char Map[max_n][max_n];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int rst;

bool safe(int x,int y){
	return x>=0 && x< h && y>=0 && y<w;
}
void dfs(int x,int y){
	char flag = Map[x][y];
	Map[x][y]='.';
	for ( int i=0;i<4;++i){
		int xx = x + dx[i];
		int yy = y + dy[i];
		if(safe(xx,yy) && Map[xx][yy]==flag){
			dfs(xx,yy);
		}
	}
}
int main(){
	while(cin>>h>>w && h && w){
		//reader
		for(int i=0;i< h;++i)
			for(int j=0;j<w;++j)
				cin>>Map[i][j];
		//
		rst = 0;
		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j){
				if(Map[i][j]!='.'){
					dfs(i,j);
					rst++;
				}
			}
		}
		cout<<rst<<endl;
	}
}