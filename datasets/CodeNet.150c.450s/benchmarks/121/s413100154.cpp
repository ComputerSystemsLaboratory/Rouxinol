#include<iostream>
#include<queue>
using namespace std;

string s[100];
int h,w;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

void bfs(int x,int y,char a)
{
	queue<pair<int,int>>Q;
	Q.push(make_pair(x,y));
	while(!Q.empty())
	{
		pair<int,int>b=Q.front();Q.pop();
		if(s[b.first][b.second]==a)s[b.first][b.second]='.';
		else continue;
		for(int r=0;r<4;r++)
		{
			int sx=b.first+dx[r];
			int sy=b.second+dy[r];
			if(sx<0||sy<0||sx>=h||sy>=w||s[sx][sy]=='.')continue;
			Q.push(make_pair(sx,sy));
		}
	}
	return;
}

int main()
{
	while(cin>>h>>w,h){
	for(int i=0;i<h;i++)cin>>s[i];
	int c=0;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(s[i][j]!='.')bfs(i,j,s[i][j]),c++;
		}
	}
	cout<<c<<endl;}
	return 0;
}