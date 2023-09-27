#include<iostream>
#include<queue>
#include<utility>
using namespace std;
#define INF 9999
typedef pair<int,int> P;
int w;//???
int h;//???
int num;//??\????????° 
P pos;//???????????? 
char fty[1005][1005]; 
P f_pos[10];
int step;
int mp[1005][1005];
void bfs(int x,int y){
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			mp[i][j]=INF;
		}
	}
	mp[pos.first][pos.second]=0;
	
	int dx[4]={1,0,-1,0};
	int dy[4]={0,1,0,-1};
	queue<P> que;
	que.push(pos);
	while(que.size()){
		P s = que.front();
		que.pop();
		if(s.first==x&&s.second==y) break;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				int nx = s.first+dx[i];
				int ny = s.second+dy[i];
				if(nx>=0&&nx<h&&ny>=0&&ny<w&&mp[nx][ny]==INF&&fty[nx][ny]!='X'){
					mp[nx][ny]=mp[s.first][s.second]+1;
					que.push(P(nx,ny));
				}
			}
		}
	}
	step+=mp[x][y]; 
	pos.first=x;
	pos.second=y;
}
int main(){
	cin>>h>>w>>num;
	step=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>fty[i][j];
			for(int k=1;k<=num;k++){
				if(fty[i][j]-48==k){
					f_pos[k].first=i;
					f_pos[k].second=j;
					break;
				}
				
			}
			if(fty[i][j]=='S'){
				pos.first=i;
				pos.second=j;
			}
		}
	}
	step=0;
	for(int k=1;k<=num;k++){
		bfs(f_pos[k].first,f_pos[k].second);
	}
	cout<<step<<endl;
}