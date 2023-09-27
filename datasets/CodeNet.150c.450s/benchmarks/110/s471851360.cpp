#include<cstdio>
#include<queue>
#include<algorithm>
#define INF 1000000
using namespace std;
typedef pair<int,int> P;
int h,w,n,ans=0;
bool map[1002][1002];
int x[10],y[10];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
int main(){
    scanf("%d %d %d",&h,&w,&n);
    fill(map[0],map[0]+1002*1002,false);
    for(int i=1;i<=h;i++){
        getchar();
        for(int j=1;j<=w;j++){
            char c=getchar();
            if(c!='X'){
                map[i][j]=true;
                if(c=='S'){
                    x[0]=i;
                    y[0]=j;
                }else if(c!='.'){
                    x[c-48]=i;
                    y[c-48]=j;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        int d[1002][1002];
        fill(d[0],d[0]+1002*1002,INF);
        queue<P> q;
        d[x[i]][y[i]]=0;
        q.push(P(x[i],y[i]));
        while(!q.empty()){
            P p=q.front();
            int sx=p.first;
            int sy=p.second;
            q.pop();
            if(sx==x[i+1]&&sy==y[i+1]) break;
            for(int j=0;j<4;j++){
                if(map[sx+dx[j]][sy+dy[j]]&&d[sx+dx[j]][sy+dy[j]]==INF){
                    d[sx+dx[j]][sy+dy[j]]=d[sx][sy]+1;
                    q.push(P(sx+dx[j],sy+dy[j]));
                }
            }
        }
        ans+=d[x[i+1]][y[i+1]];
    }
    printf("%d\n",ans);
}