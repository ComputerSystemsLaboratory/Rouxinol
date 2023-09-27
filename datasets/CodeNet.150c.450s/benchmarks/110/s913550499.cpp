#include <iostream>
#include <utility>
#include <queue>

using namespace std;

const int MAX_H=1000,MAX_W=1000;
const int INF=10000000;

int H,W,N;
char f[MAX_H][MAX_W+1];

typedef pair<int,int> P;

P fac[9];	//???????????\??´?????????
int d[MAX_H][MAX_W];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int bfs(P s,P g){
	//s??????g?????§??????????????¢
	//d????????????
	for (int i=0;i<H;i++){
		for (int j=0;j<W;j++){
			d[i][j]=INF;
		}
	}
	queue<P> que;
	//?§???????????????????0
	d[s.second][s.first]=0;
	que.push(s);
	while (!que.empty()){
		P p=que.front();
		que.pop();
		if (g==p){
			break;
		}
		//4???????????¢?´¢
		for (int i=0;i<4;i++){
			int x=p.first+dx[i],y=p.second+dy[i];
			if (x>=0 && x<W && y>=0 && y<H && f[y][x]!='X' && d[y][x]==INF){
				d[y][x]=d[p.second][p.first]+1;	//???????????´??°
				que.push(P(x,y));
			}
		}
	}
	return d[g.second][g.first];
}

int main(){
	cin>>H>>W>>N;
	P s;
	for (int i=0;i<H;i++){
		cin>>f[i];
		for (int j=0;j<W;j++){
			if ('1'<=f[i][j] && f[i][j]<='9'){
				fac[(int)(f[i][j]-'1')].first=j;
				fac[(int)(f[i][j]-'1')].second=i;
			}
			else if (f[i][j]=='S'){
				s.first=j;
				s.second=i;
			}
		}
	}
	int res=0;
	for (int i=0;i<N;i++){
		res+=bfs(s,fac[i]);
		s=fac[i];
	}
	cout<<res<<endl;
	return 0;
}