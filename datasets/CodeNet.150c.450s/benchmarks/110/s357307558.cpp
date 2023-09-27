#include<cstdio>
#include<utility>
#include<queue>

struct P {int x,y;};

using namespace std;

char map[1005][1005];
int h,w,n;

int distance(char start, char goal) {
    bool visited[1005][1005];
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            visited[i][j] = false;


    queue<pair<P,int> > q;
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            if(map[i][j] == start) q.push(pair<P,int>({j,i}, 0));
    
    while(!q.empty()) {
        pair<P,int> t = q.front(); q.pop();
        struct P p = t.first;
        int d = t.second;

        if(p.x < 0 || p.y < 0 || p.x >= w || p.y >= h) continue;
        if(map[p.y][p.x] == 'X') continue;
        if(visited[p.y][p.x]) continue;
        if(map[p.y][p.x] == goal) return d;
        visited[p.y][p.x] = true;
        
        q.push(pair<P,int>({p.x+1,p.y},d+1));
        q.push(pair<P,int>({p.x,p.y+1},d+1));
        q.push(pair<P,int>({p.x-1,p.y},d+1));
        q.push(pair<P,int>({p.x,p.y-1},d+1));
    }
    return -1;
}


int main(void) {
    int res=0;

    scanf("%d%d%d",&h,&w,&n);
    for(int i=0;i<h;i++)
        scanf("%s",map[i]);
    res += distance('S','1');
    for(int i=1;i<n;i++)
        res += distance('0'+i,'1'+i);

    printf("%d\n",res);

    return 0;
}