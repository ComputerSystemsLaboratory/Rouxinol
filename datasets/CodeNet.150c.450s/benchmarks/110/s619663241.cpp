#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;
char a[1001][1001];
int v[1001][1001],n,h,w,sx,sy,ans;
int dir[4][2]={-1,0,1,0,0,1,0,-1};
char b[1001];
int s[1001][1001];
struct st
{
    int x,y;
}st1,st2,fl,pp;
int check(st kk)
{
    if(kk.x>=0&&kk.x<h&&kk.y>=0&&kk.y<w)
        return 1;
    else
    	return 0;
}
int  bfs(char c)
{
	queue<st>qq;	
	qq.push(pp);
    memset(v,0,sizeof(v));
    memset(s,0,sizeof(s));
    while(!qq.empty())
    {   	
		st1=qq.front();		
        qq.pop();
     	if(a[st1.x][st1.y]==c)
     	{
	     	pp=st1;			
			//printf("+%d %d+ %d\n",st1.x,st1.y,s[pp.x][pp.y]);	
	 		break;  
    	}             
        for(int i=0;i<4;i++)
        {
            st2.x=st1.x+dir[i][0];
            st2.y=st1.y+dir[i][1];
            if(check(st2)&&v[st2.x][st2.y]==0&&a[st2.x][st2.y]!='X')
            {
     			v[st2.x][st2.y]=1;
                s[st2.x][st2.y]=s[st1.x][st1.y]+1;
                //printf("-%d %d %d-\n",st2.x,st2.y,s[st2.x][st2.y]);
                qq.push(st2);
            }
        }
    }	
	return s[pp.x][pp.y];
   // printf("(%d %d %d %c)\n",st1.x,st1.y,s[st1.x][st1.y],c);
   
}
int main()
{
    int  i,j,k,m,l;
    while(~scanf("%d %d %d",&h,&w,&n))
    {    
    	getchar();
        memset(v,0,sizeof(v));
        memset(s,0,sizeof(s));
        for(i=0;i<h;i++)
        {
            scanf("%s",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            b[i]=i+1+'0';
            //printf("%c\n",b[i]);
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(a[i][j]=='S')
                {
                    pp.x=i;
                    pp.y=j;
                }
            }
        }
        //printf("%d %d\n",sx,sy);
        int sum=0;
		for(i=0;i<n;i++)
        { 
            sum+=bfs(b[i]);
            //printf("[%d]\n",sum);
        }
        printf("%d\n",sum);
    }
    return 0;
}