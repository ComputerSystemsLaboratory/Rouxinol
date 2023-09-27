#include <bits/stdc++.h>
using namespace std;
bool d[51][51];
int a,b,s,_x,_y,dx[8]={0,-1,-1,-1,0,1,1,1},dy[8]={1,1,0,-1,-1,-1,0,1};
#define r(z,x) for(int z=0;z<x;z++)
void dfs(int x,int y){
	if(0>x||x>=b||0>y||y>=a)return;
	d[x][y]=0;
	r(i,8)if(d[_x=x+dx[i]][_y=y+dy[i]])dfs(_x,_y);
}
int main(){
	while(cin>>a>>b,a||b){
		s=0;
		r(i,b)r(j,a)cin>>d[i][j];
		r(i,b)r(j,a)if(d[i][j])dfs(i,j),s++;
		cout<<s<<endl;
	}
}