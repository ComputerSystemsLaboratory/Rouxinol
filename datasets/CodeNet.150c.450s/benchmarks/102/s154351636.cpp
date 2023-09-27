#include<stdio.h>
#include<iostream>
#include<utility>
#include<string.h>
#include<queue>
using namespace std;
typedef long long ll;
#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define FORR(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define CHMIN(a,b) (a) = min((a),(b))
#define CHMAX(a,b) (a) = max((a),(b))

int main()
{
    std::queue<pair<int,int> > que;
    int w,h;
    char ban[25][25]={};
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int ans;
    while(1==1)
    {
        ans=0;
        scanf("%d %d\n",&w,&h);
        if(w==0&&h==0)return 0;
        REP(i,25)REP(j,25)ban[i][j]='\0';
        REP(i,h)
        {
            REP(j,w)
            {
                scanf("%c",&ban[i][j]);
                if(ban[i][j]=='@')que.push(pair<int,int>(i,j));
            }
            scanf("\n");
        }
        while(!que.empty())
        {
            pair<int,int> p=que.front();
            que.pop();
            if(ban[p.first][p.second]=='.'||ban[p.first][p.second]=='@')
            {
                ban[p.first][p.second]='#';
                ans++;
                REP(i,4)
                {
                    if(ban[p.first+dy[i]][p.second+dx[i]]=='.')
                    {
                        que.push(pair<int,int>(p.first+dy[i],p.second+dx[i]));
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
