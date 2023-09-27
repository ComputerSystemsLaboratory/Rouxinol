#include <iostream>
#include <string>
using namespace std;
int dh[]={-1,0,1,0},dw[]={0,1,0,-1},h,w;
string s[101];
void dfs(int _h,int _w,char ch){
	s[_h][_w]='.';
	for(int i=0;i<4;i++){
		int H=_h+dh[i],W=_w+dw[i];
		if(H>=0&&H<h&&W>=0&&W<w&&s[H][W]==ch)dfs(H,W,ch);
	}
}
int main(){
	while(cin>>h>>w,h){
		int count=0;
		for(int i=0;i<h;i++)cin>>s[i];
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)if(s[i][j]!='.')count++,dfs(i,j,s[i][j]);
		cout<<count<<endl;
	}
}