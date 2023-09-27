#include <iostream>
#include <queue>
using namespace std;
class pos
{
	public:
	int x;
	int y;
	pos(int,int);
};

pos::pos(int a,int b)
{
	x=a;y=b;
}

int main()
{
	int w,h;
	int g[21][21];
/*	for(int i=0;i<21;i++)
		for(int j=0;j<21;j++)
			g[i][j]=-1;
*/	while(1)
	{
		cin>>w>>h;
		if(w==0&&h==0) break;
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				g[i][j]=-1;
		int psx,psy;
		bool visited[21][21];
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
			{
				char s;
				cin>>s;
				switch(s)
				{
					case '.':
						g[i][j]=0;break;
					case '#':
						g[i][j]=1;break;
					case '@':
						g[i][j]=2;psx=i;psy=j;break;
				}
				visited[i][j]=false;
			}

/*		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
				cout<<g[i][j];
			cout<<endl;
		}
*/
		int num=0;
		queue<pos> Q;
		Q.push(pos(psx,psy));
		num++;
		visited[psx][psy]=true;
		while(!Q.empty())
		{
			pos now=Q.front();
			Q.pop();
	
			for(int i=-1;i<=1;i+=2)
			{
				int newx=now.x+i;
				int newy=now.y;
				if(newx>=0&&newx<h&&newy>=0&&newy<w&&g[newx][newy]==0&&visited[newx][newy]==false)
				{
					Q.push(pos(newx,newy));		
					num++;
					visited[newx][newy]=true;
				}
			}
			for(int i=-1;i<=1;i+=2)
			{                
				int newx=now.x;
				int newy=now.y+i;
				if(newx>=0&&newx<h&&newy>=0&&newy<w&&g[newx][newy]==0&&visited[newx][newy]==false)
				{
					Q.push(pos(newx,newy));
					num++;
					visited[newx][newy]=true;
				}
			}

		}
		cout<<num<<endl;
								


	}
}