#include <stdio.h>

#include <utility>
#include <queue>

using namespace std;

#define INF 1001001

typedef pair<int, int> P;

int main(void){
    queue<P> q;
    P p;
    int i,j,k,h,w,n,dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},ans=0,d[1000][1000];
    char map[1000][1002];
    scanf("%d%d%d",&h,&w,&n);
    for(i=0; i<h; i++){
        scanf("%s",map[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<h; j++){
            for(k=0; k<w; k++){
                d[j][k] = INF;
                if(map[j][k]=='S'){
                    q.push(P(j,k));
                    map[j][k]='.';
                    d[j][k] = 0;
                }
            }
        }
        while(!q.empty()){
            p = q.front();
            q.pop();
            if(map[p.first][p.second]=='1'+i){
                ans+=d[p.first][p.second];
                map[p.first][p.second]='S';
                break;
            }
            for(j=0; j<4; j++){
                int nx = p.first + dx[j];
                int ny = p.second + dy[j];
                if(nx>-1 && nx<h && ny>-1 && ny<w && map[nx][ny]!='X' && d[nx][ny]==INF){
                    q.push(P(nx,ny));
                    d[nx][ny]=d[p.first][p.second]+1;
                }
            }
        }
        while(!q.empty()){
            q.pop();
        }
    }
    printf("%d\n",ans);
    return 0;
}