#include <cstdio>
using namespace std;

int H,W;

char map[105][105];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void stamp_a(int i,int j,char fruit);

int main()
{
	int ans;
	for(;;)
	{
		scanf("%d %d",&H,&W);
		if(H==0 && W==0)
			break;
		for(int i=0;i<H;i++)
			scanf("%s",map[i]);
		ans=0;
		for(int i=0;i<H;i++)
			for(int j=0;j<W;j++)
			{
				if(map[i][j] == '@')
				{
					stamp_a(i,j,'@');
					ans++;
				}
				if(map[i][j] == '#')
				{
					stamp_a(i,j,'#');
					ans++;
				}
				if(map[i][j] == '*')
				{
					stamp_a(i,j,'*');
					ans++;
				}
			}
		printf("%d\n",ans);
	}
	return 0;
}

void stamp_a(int i,int j,char fruit)
{
	map[i][j] = 'a';
	int x,y;
	for(int k=0;k<4;k++)
	{
		x = i + dx[k];
		y = j + dy[k];
		if(x >= 0 && x < H && y >= 0 && y < W && map[x][y] == fruit)
			stamp_a(x,y,fruit);
	}
}