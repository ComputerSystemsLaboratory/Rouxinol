#include<iostream>
#include<queue>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

class position{
public:
	int x,y;
};

int main(){
	int a,b,n;
	while(1){
		cin>>a>>b;
		if(!a && !b)break;
		int dt[a][b];
		cin>>n;
		position error[n];
		rep(i,n){
			int ax,ay;
			cin>>ax>>ay;
			error[i].x=ax-1;
			error[i].y=ay-1;
		}
		int dirx[2]={1,0};
		int diry[2]={0,1};
		queue<position> que;
		position start;
		start.x=0;
		start.y=0;
		que.push(start);
		long long ans=0;
		while(!que.empty()){
			position now=que.front();
			que.pop();
			position next;
			rep(i,2){
				next.x=now.x+dirx[i];
				next.y=now.y+diry[i];
				int cnt=0;
				if(next.x==a-1 && next.y==b-1){//????????°????????????
					ans++;
					continue;
				}
				rep(j,n){//??\????????´????????????
					if(next.x==error[j].x && next.y==error[j].y){
						cnt++;
					}
				}
				if(cnt==0 && next.x<a && next.x>=0 && next.y>=0 && next.y<b ){//??????????????£??????????????\????????´??????????????£????????????
					que.push(next);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}