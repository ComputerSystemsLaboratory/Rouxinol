//待解，&#35843;用函数 
#include<queue>
#include<cctype>
#include<cstdio>
#define mp          make_pair
using namespace std;
typedef pair<int,int> point;
const int maxn = 1005;
int height,width;    //n代表硬度 
char maze[maxn][maxn];
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

bool visited[maxn][maxn];
int shortDistance(int sx,int sy,int ex,int ey)
{
	//初始化visted数&#32452;
	for(int i = 0;i<height;i++)
		for(int j = 0;j<width;j++)
			visited[i][j] = false;
	visited[sy][sx] = true;
	queue<pair<int,point> > q;q.push(mp(0,mp(sy,sx)));
	while(1)
	{
		pair<int,point> a = q.front();q.pop();
		int d=a.first,x=a.second.second,y=a.second.first;
		if(x==ex&&y==ey)
		{
			return d;
		}
		for(int i = 0;i<4;i++)
		{
			 int xx=x+dx[i],yy=y+dy[i];
            if(0<=xx && xx<width && 0<=yy && yy<height && maze[yy][xx]!='X' && !visited[yy][xx]){
                visited[yy][xx]=true;
                q.push(mp(d+1,mp(yy,xx)));
            }
		}
	}
}

int main()
{
	int cx[10],cy[10],n;
	//freopen("I:\\0558-in2.txt","r",stdin);
	scanf("%d%d%d",&height,&width,&n);
	//&#36755;入迷&#23467; 
	for(int i = 0;i<height;i++)
	{
		scanf("%s",maze[i]);
		//&#26597;找老鼠&#24034;的位置
		for(int j = 0;j<width;j++)
		{
			if(maze[i][j]=='S')
			{
				cy[0] = i;
				cx[0] = j;
			}
			else if(isdigit(maze[i][j]))
			{
				int k = maze[i][j]-'0';
				cx[k] = j;cy[k] = i;
			}
			
		}
	}
	int cost = 0;
	
	for(int i = 0;i<n;i++)
		cost += shortDistance(cx[i],cy[i],cx[i+1],cy[i+1]);
	printf("%d\n",cost);
	return 0;
}