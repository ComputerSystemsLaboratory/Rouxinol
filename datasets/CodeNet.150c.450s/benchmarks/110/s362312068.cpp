#include<queue>
#include<cctype>
#include<cstdio>

#define mp           make_pair
#define rep(i,n)     for(int i = 0;i<n;i++)

using namespace std;

typedef pair<int , int > pii;


const int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

int h,w;
char grid[1010][1010];

int shortestDistance(int sx,int sy,int gx,int gy)
{
	static bool visited[1010][1010];
	rep(i,h)rep(j,w)  visited[i][j] = false;
	visited[sy][sx] = true;
	
	queue< pair< int ,pii > > qu;
	qu.push(mp(0,mp(sy,sx)));
	while(1)
	{
		pair<int ,pii> a = qu.front();
		qu.pop();
		int d = a.first,x = a.second.second,y = a.second.first;
		if(x == gx && y == gy) return d;
		
		rep(i,4)
		{
			int xx = x + dx[i], yy = y + dy[i];
			 if(0<=xx && xx<w && 0<=yy && yy<h && grid[yy][xx]!='X' && !visited[yy][xx])
			{
                visited[yy][xx]=true;
                qu.push(mp(d+1,mp(yy,xx)));
            }

		}
	}
}



int main(){
    int n;  scanf("%d%d%d",&h,&w,&n);
    int cx[10],cy[10];
    rep(i,h){
        scanf("%s",grid[i]);
        rep(j,w){
            if(grid[i][j]=='S')     cx[0]=j,cy[0]=i;
            if(isdigit(grid[i][j])) cx[grid[i][j]-'0']=j,cy[grid[i][j]-'0']=i;
        }
    }
 
    int cost=0;
    rep(i,n)    cost+=shortestDistance(cx[i],cy[i],cx[i+1],cy[i+1]);
    printf("%d\n",cost);
 
    return 0;
}