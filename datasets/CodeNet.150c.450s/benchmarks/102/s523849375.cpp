#include<iostream>
#include<queue>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

class place{
public:
	int x;
	int y;
};

int main(){
	int W,H;
	while(1){
		cin>>W>>H;
		if(W==0 && H==0)break;
		bool dt[H][W];
		int startx,starty;
		rep(i,H){
			rep(j,W){
				char c;
				cin>>c;
				if(c=='.'){
					dt[i][j]=false;
				}else if(c=='#'){
					dt[i][j]=true;
				}else{
					startx=j;
					starty=i;
					dt[i][j]=false;
				}
			}
		}
		queue<place> que;
		place p;
		p.x=startx;
		p.y=starty;
		que.push(p);
		int cnt=0;
		int dirx[4]={1,0,-1,0};
		int diry[4]={0,1,0,-1};
		while(!que.empty()){
			p=que.front();
			que.pop();
			if(!dt[p.y][p.x])cnt++;
			dt[p.y][p.x]=true;
			rep(k,4){
				int nx=p.x+dirx[k];
				int ny=p.y+diry[k];
				if(nx>=0 && ny>=0 && nx<W && ny<H && !dt[ny][nx]){
					place pp;
					pp.x=nx;
					pp.y=ny;
					que.push(pp);
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}