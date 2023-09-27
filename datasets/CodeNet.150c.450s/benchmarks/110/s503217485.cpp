#include<cstdio>
#include<cstring>
#include<queue>
#define maxn 1002
#define maxc 10
using namespace std;
struct point{
    int r,c;
};
char graph[maxn][maxn];
int len[maxn][maxn];
bool mark[maxn][maxn];
point node[maxc];
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int main(void){
    int h,w,cheese,tr,tc,answer=0;
    scanf("%d%d%d",&h,&w,&cheese);
    memset(graph,0,sizeof(graph));
    memset(node,0,sizeof(node));
    for(int i=1;i<=h;i++) for(int j=1;j<=w;j++){
        do scanf("%c",&graph[i][j]);
        while(graph[i][j]==' ' || graph[i][j]=='\n');
        if(graph[i][j]>='0' && graph[i][j]<='9'){
            node[graph[i][j]-'0'].r=i;
            node[graph[i][j]-'0'].c=j;
        }
        else if(graph[i][j]=='S'){
            node[0].r=i;
            node[0].c=j;
        }
    }
    for(int cnt=0;cnt<cheese;cnt++){
        memset(len,0,sizeof(len));
        memset(mark,false,sizeof(mark));
        for(int i=0;i<=h+1;i++){mark[i][0]=true;mark[i][w+1]=true;}
        for(int j=0;j<=w+1;j++){mark[0][j]=true;mark[h+1][j]=true;}
        queue<point> q;
        q.push(node[cnt]);
        len[node[cnt].r][node[cnt].c]=0;
        point ongo,togo;
        while(!q.empty()){
            ongo=q.front();
            q.pop();
            if(mark[ongo.r][ongo.c]) continue;
            mark[ongo.r][ongo.c]=true;
            if(ongo.r==node[cnt+1].r && ongo.c==node[cnt+1].c){
                answer+=len[ongo.r][ongo.c];
                break;
            }
            for(int i=0;i<4;i++){
                togo.r=ongo.r+dir[i][0];togo.c=ongo.c+dir[i][1];
                if(mark[togo.r][togo.c]==false && graph[togo.r][togo.c]!='X'){
                    len[togo.r][togo.c]=len[ongo.r][ongo.c]+1;
                    q.push(togo);
                }
            }
        }
    }
    printf("%d\n",answer);
    return 0;
}
