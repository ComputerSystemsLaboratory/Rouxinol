#include<iostream>
#include<utility>
#include<queue>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef pair<int,int> pii;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int h,w;
bool inside(pii pick){
	if(pick.first<h && pick.first>=0 && pick.second<w && pick.second>=0)return true;
	else return false;
}

int main(){
	while(1){
		cin>>h>>w;
		if(h==0 && w==0)break;
		int ans=0;
		char dt[h][w];
		string s;
		rep(i,h){
			cin>>s;
			rep(j,w)dt[i][j]=s[j];
		}
		rep(i,h){
			rep(j,w){
				if(dt[i][j]!='-'){
					ans++;
					queue<pii> que;
					que.push(pii(i,j));
					while(!que.empty()){
						pii now=que.front(),alt;
						que.pop();
						rep(k,4){
							alt=now;
							alt.first+=dy[k];
							alt.second+=dx[k];
							if(inside(alt) && dt[alt.first][alt.second]==dt[now.first][now.second] && dt[alt.first][alt.second]!='-'){
								que.push(alt);
							}
						}
						dt[now.first][now.second]='-';
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}