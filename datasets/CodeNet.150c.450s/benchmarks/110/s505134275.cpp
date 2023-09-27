#include <cstdio>
#include <queue>
#include <algorithm>
using namespace::std;
#define INF 1000000
struct point{
    int x,y;
};
int h,w,n,ans=0,i,j,x,y;
char map[1000][1000];
point cheese[10];
int move(int p){
    int count[1000][1000],i,j;
    for (i=0; i<w; i++) {
        for (j=0; j<h; j++) {
            count[i][j]=INF;
        }
    }
    count[cheese[p].x][cheese[p].y]=0;
    queue<point> q;
    q.push(cheese[p]);
    while (!q.empty()) {
        point position=q.front();
        q.pop();
        int a[]={0,1,0,-1},b[]={1,0,-1,0};
        for (i=0; i<4; i++) {
            if (position.x+a[i]>=0&&position.x+a[i]<w&&position.y+b[i]>=0&&position.y+b[i]<h&&map[position.x+a[i]][position.y+b[i]]!='X'&&count[position.x+a[i]][position.y+b[i]]==INF) {
                count[position.x+a[i]][position.y+b[i]]=count[position.x][position.y]+1;
                point t;
                t.x=position.x+a[i];
                t.y=position.y+b[i];
                q.push(t);
            }
        }
    }
    return count[cheese[p+1].x][cheese[p+1].y];
}
int main(){
    scanf("%d%d%d",&h,&w,&n);
    for (i=0; i<h; i++) {
        for (j=0; j<w; j++) {
            scanf(" %c",&map[j][i]);
            if (map[j][i]=='S') {
                cheese[0].x=j;
                cheese[0].y=i;
            }else if (map[j][i]>=49&&map[j][i]<=57){
                cheese[map[j][i]-48].x=j;
                cheese[map[j][i]-48].y=i;
            }
        }
    }
    for (i=0; i<n; i++) {
        ans+=move(i);
    }
    printf("%d\n",ans);
    return 0;
}