#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
const int MAXN = 200;
char B[MAXN][MAXN];
int W,H,cnt;

int dx[5] = {1,0,-1,0};
int dy[5] = {0,1,0,-1};

void isStar(int y, int x)
{
	for(int i =0 ; i<5;i++)
		if(B[y+dy[i]][x+dx[i]]=='*')
			{B[y+dy[i]][x+dx[i]]='0';isStar(y+dy[i],x+dx[i]);}
}

void isSharp(int y, int x)
{
	for(int i =0 ; i<5;i++)
		if(B[y+dy[i]][x+dx[i]]=='#')
			{B[y+dy[i]][x+dx[i]]='0';isSharp(y+dy[i],x+dx[i]);}
}

void isAt(int y, int x)
{
	for(int i =0 ; i<5;i++)
		if(B[y+dy[i]][x+dx[i]]=='@')
			{B[y+dy[i]][x+dx[i]]='0';isAt(y+dy[i],x+dx[i]);}
}



void solve()
{

	for(int i = 1; i<=H;i++)
		for(int j = 1; j<=W;j++)
		{
			if(B[i][j] == '*')
			{
				B[i][j] = '0';
				cnt++;
				isStar(i,j);
			}
			else if(B[i][j] == '#')
			{
				B[i][j] = '0';
				cnt++;
				isSharp(i,j);
			}
			else if(B[i][j] == '@')
			{
				B[i][j] = '0';
				cnt++;
				isAt(i,j);
			}
		}
	
	cout << cnt<<endl;
}

int main()
{
	
	
	
	while(cin >>H>> W && W||H)
	{
		memset(B,'0',sizeof(B));
		
		for(int i = 1; i<= H; i++)
		{
			for(int j = 1; j<= W; j++)
				cin >> B[i][j];
		getchar();
		}
		cnt = 0;
		solve();
	}
}