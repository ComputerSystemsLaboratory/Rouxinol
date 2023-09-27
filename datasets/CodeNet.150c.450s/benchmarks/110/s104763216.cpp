#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<queue>

using namespace std;

char s[1005][1005]= {'\0'};

int n, m, num;
int a[10][2]= {0};

int mov1[4]= {-1,0,1,0};
int mov2[4]= {0,1,0,-1};

struct node
{
    int x;
    int y;
    int ans;
    node()
    {
        x=0;
        y=0;
        ans=0;
    }
    node(int a,int b,int c)
    {
        x=a;
        y=b;
        ans=c;
    }
};

queue<node>q;

node t;

void bfs(node temp,int type)
{
    if(type>num)return;
    if(a[type][0]==temp.x&&a[type][1]==temp.y)
    {
        //printf("*****\n");
            //printf("type is %d\n",type);
            for(int i=1; i<=n; i++)
                for(int j=1; j<=m; j++)
                    if(s[i][j]=='*')
                        s[i][j]='.';
            while(!q.empty())q.pop();
            bfs(temp,type+1);
    }
    else
    {
        q.push(temp);
        while(!q.empty())
        {
            t=q.front();
            q.pop();
            if(a[type][0]==t.x&&a[type][1]==t.y)
            {
                bfs(t,type);
                break;
            }
            s[t.x][t.y]='*';
            for(int i=0;i<4;i++)
            {
                int tx=t.x+mov1[i];
                int ty=t.y+mov2[i];
                if(tx<1||ty<1||tx>n||ty>m||s[tx][ty]=='X'||s[tx][ty]=='*')continue;
                node p(tx,ty,t.ans+1);
                s[tx][ty]='*';
                //printf("jiezhi %d %d %d\n",tx,ty,t.ans+1);
                q.push(p);
            }
        }

    }
}

int main()
{
    //freopen("in.in","r",stdin);
    while(scanf("%d%d%d",&n,&m,&num)!=EOF)
    {
        char c=getchar();
        memset(s,'\0',sizeof(s));
        memset(a,0,sizeof(a));
        int x=0, y=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                scanf("%c",&s[i][j]);
                if(s[i][j]=='S')
                {
                    x=i;
                    y=j;
                }
                if(s[i][j]>='0'&&s[i][j]<='9')
                {
                    a[s[i][j]-'0'][0]=i;
                    a[s[i][j]-'0'][1]=j;
                }
            }
            c=getchar();
        }
        //for(int i=1;i<=num;i++)
        //    printf("%d %d\n",a[i][0],a[i][1]);
        while(!q.empty())q.pop();
        /*for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                printf("%c",s[i][j]);
            printf("\n");
        }*/
        node temp;
        temp.x=x;
        temp.y=y;
        bfs(temp,1);
        printf("%d\n",t.ans);
    }
    return 0;
}