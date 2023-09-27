#include<cstdio>
#include<queue>
#include<string.h>
using namespace std;

const int MAXn = 1e5+5;
const int MAXm = 2e5+5;

int tot;
bool vis[MAXn];
int head[MAXn];
int to[MAXm<<1];
int nxt[MAXm<<1];
int bfscnt[MAXn];
bool flag = true;

int n, m;

void add(int x,int y) {

    nxt[++tot] = head[x];
    head[x] = tot;
    to[tot] = y;
}

void inp() {

    for(int i = 1; i <= m; i++) {

        int x,y;
        scanf("%d %d",&x,&y);
        add(x,y);
        add(y,x);
    }
}

void bfs() {

    queue<int> q;
    q.push(1);
    bfscnt[1] = 1;
    vis[1] = true;
    int cnt = 0;

    while(!q.empty()) {

        int x = q.front();
        q.pop();
        cnt++;
        for(int i = head[x]; i ;i = nxt[i]) {
            if(vis[to[i]])
                continue;
            vis[to[i]] = true;
            
            bfscnt[to[i]] = x;
            q.push(to[i]);
        }
    }
    if(cnt != n)
        flag = false;
}

void debug() {

    for(int i = 1; i <= n; i++)
        printf("%d ",bfscnt[i]);
}

int main() {

    while(~scanf("%d %d",&n,&m)) {
        inp();

        bfs();
        if(flag) {
            puts("Yes");
            for(int i = 2; i <= n; i++) {
                if(i == 2) printf("%d",bfscnt[i]);
                else printf("\n%d",bfscnt[i]);
            }
        }
        else puts("No");
        tot = 0;
        flag = true;
        memset(bfscnt,0,sizeof(bfscnt));
        memset(nxt,0,sizeof(nxt));
        memset(head,0,sizeof(head));
        memset(vis,false,sizeof(vis));
        puts("");
    }

    return 0;
}