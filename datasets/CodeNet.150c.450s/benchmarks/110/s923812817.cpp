#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<string.h>
#include<functional>
//aoj 0558
using namespace std;
int n,bs;
int hs,sl;
int dh[5]={0,0,0,1,-1};
int dll[5]={0,1,-1,0,0};
int cun[1003][1003];
struct pt{
	int hh;
	int ll;
	int step;
};
pt dl1[11];
char vis[1003][1003];
pt dl[1<<16];
void bfs(int h,int l,int gs)
{
	int qy=1<<16;
	qy--;
	memset(dl,0,sizeof(dl));
	memset(vis,0,sizeof(vis));
	int front=1;
	int back=2;
	pt ls;
	ls.hh=h;
	ls.ll=l;
	ls.step=0;
	dl[1]=ls;
	vis[h][l]=1;
	while(front<back)
	{
		pt lss=dl[front&qy];
		front++;
		for(int i=1;i<=4;i++)
		{
			if(lss.hh+dh[i]>0&&lss.hh+dh[i]<=hs&&lss.ll+dll[i]>0&&lss.ll+dll[i]<=sl&&cun[lss.hh+dh[i]][lss.ll+dll[i]]!=111&&vis[lss.hh+dh[i]][lss.ll+dll[i]]!=1)
			{
				pt jr;
				jr.hh=lss.hh+dh[i];
				jr.ll=lss.ll+dll[i];
				jr.step=lss.step+1;
				if(cun[lss.hh+dh[i]][lss.ll+dll[i]]==gs)
				{
					bs+=jr.step;
					return;
				}else{
					dl[back&qy]=jr;
					vis[jr.hh][jr.ll]=1;
					back++;
				}
			}
		}
	}
}
int main()
{
	scanf("%d%d%d",&hs,&sl,&n);
	while(getchar()!='\n');
	for(int i=1;i<=hs;i++)
	{
		for(int j=1;j<=sl;j++)
		{
			char aaa;
			scanf("%c",&aaa);
			if(aaa=='X')
			{
				cun[i][j]=111;
			}
			if(aaa=='S')
			{
				pt ls;
				ls.hh=i;
				ls.ll=j;
				dl1[0]=ls;
				cun[i][j]=22;
			}
			if(aaa>='1'&&aaa<='9')
			{
				pt ls;
				ls.hh=i;
				ls.ll=j;
				dl1[aaa-'0']=ls;
				cun[i][j]=aaa-'0';
			}
		}
		
		while(getchar()!='\n');
	}
	for(int i=0;i<=n-1;i++)
	{
		bfs(dl1[i].hh,dl1[i].ll,i+1);
	}
	printf("%d\n",bs);
	return 0;
}










