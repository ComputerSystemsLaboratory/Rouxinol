#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void dye(int x,int y, char c);
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
int h,w;
char map[105][105];

int main()
{
	//freopen("B.txt","r",stdin); 
	int count=0;
	while(cin>>h>>w && !(h==0 && w==0))
	{
	count = 0;
	memset(map,-1,sizeof(map[0]));
	for(int i=0; i<h; i++)
		for(int j=0; j<w; j++)
			{
			cin>>map[i][j]; 
		}
		
	/*		
	for(int i=0; i<h; i++)
		{
		for(int j=0; j<w; j++)
		cout<<map[i][j];
		cout<<endl;
				}
	*/
	
	for(int i=0; i<h; i++)
		for(int j=0; j<w; j++)
			{
				if(map[i][j]!=0 &&map[i][j]!=-1)
				{
					dye(i,j,map[i][j]);
					count++;
				}
			}
	cout<<count<<endl;
	
	}
	return 0;
}
 


void dye(int x,int y, char c)
{
	map[x][y]=0;
	for(int i=0;i<4;i++)
		{
			int cx=x+dx[i], cy=y+dy[i];

			if(0<=cx && cx <h && 0<=cy && cy<w && map[cx][cy]==c)
			{
				dye(cx,cy,c);
			}
			
	}
	return ;
}
 