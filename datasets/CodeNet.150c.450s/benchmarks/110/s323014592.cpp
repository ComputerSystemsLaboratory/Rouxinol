#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
#define rep(x,y) for(x=0;x<(y);++x)
typedef pair<int, int> P;
const int MAX_N=1011;//提交之前改成1011
const int dw[4]={1,0,-1,0},dh[4]={0,1,0,-1};
const char sdt='S',vac='.',blc='X',hdns[11]={'0','1','2','3','4','5','6','7','8','9'};
void in();
void solve();
void bfs(char g);
int H,W,N;//高，&#23485;，目&#26631;数
int sh,sw;//起始位置
int cdis;//当前&#26102;&#38388;
char maze[MAX_N][MAX_N];//地&#22270;,h-第一&#32500;，w-第二&#32500;，从1&#24320;始
int dis[MAX_N][MAX_N];//距&#31163;&#26631;&#35760;

int main()
{
	in();
	solve();
	return 0;
}
void in()
{
	cin>>H>>W>>N;
	int h,w;
	for(h=1;h<=H;++h)
	{
		for(w=1;w<=W;++w)
		{
			cin>>maze[h][w];
			if(sdt==maze[h][w])
			{
				sh=h;
				sw=w;
			}
		}
	}
}
void solve()
{
	int n;
	int tm=0;
	for(n=1;n<=N;++n)
	{
		memset(dis,-1,sizeof(dis));//&#27599;一次都重新&#35774;置起始&#32456;止点，重新&#26631;&#35760;距&#31163;
		bfs(hdns[n]);
		tm+=cdis;
	}
	cout<<tm<<endl;
}
void bfs(char g)
{
	queue<P> que;
	P nl=P(sh,sw);
	int ch,cw;
	que.push(nl);
	dis[sh][sw]=0;
	int i,ndis;
	while(1)//一定会找到的，不用写que.size()
	{
		nl=que.front();
		que.pop();
		ndis=dis[nl.first][nl.second];
		rep(i,4)
		{
			ch=nl.first+dh[i];
			cw=nl.second+dw[i];
			if(!(H<ch||ch<1||W<cw||cw<1||blc==maze[ch][cw]||-1!=dis[ch][cw]))
			{
				if(g==maze[ch][cw])
				{
					cdis=ndis+1;
					sh=ch;
					sw=cw;
					return;
				}
				que.push(P(ch,cw));
				dis[ch][cw]=ndis+1;
			}
		}
	}
FIND:
	return;
}