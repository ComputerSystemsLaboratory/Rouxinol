#include<iostream>
#include<string>
#include<queue>
#include<map>
using namespace std;
int main(){
	int w,h;
	while(cin>>w>>h,w+h!=0){
		string ban[100];
		int sx=0,sy=0;
		queue< pair<int,int> >bfs;
		bool table[100][100];
		for(int i=0;i<100;i++)for(int j=0;j<100;j++)table[i][j]=false;
		
		for(int i=0;i<h;i++){
			cin>>ban[i];
			for(int j=0;j<ban[i].size();j++){
			if(ban[i][j]=='@')sy=i,sx=j;
			}
		}
		pair<int,int> s(sx,sy);
		bfs.push(s);
		table[sy][sx]=true;
		int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
		while(bfs.empty()==false){
			pair<int,int>now=bfs.front();
			bfs.pop();
			int nx=now.first,ny=now.second;
			for(int i=0;i<4;i++){
				if(nx+dx[i]>=0&&nx+dx[i]<w&&ny+dy[i]>=0&&ny+dy[i]<h){
					if(table[ny+dy[i]][nx+dx[i]]==false&&ban[ny+dy[i]][nx+dx[i]]=='.'){
					pair<int,int>tmp(nx+dx[i],ny+dy[i]);
					bfs.push(tmp);
					table[tmp.second][tmp.first]=true;
				}
				}
			}
		}
		int cnt=0;
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)if(table[i][j])cnt++;
		cout<<cnt<<endl;
		for(int i=0;i<100;i++)ban[i].clear();
	}
	return 0;
}