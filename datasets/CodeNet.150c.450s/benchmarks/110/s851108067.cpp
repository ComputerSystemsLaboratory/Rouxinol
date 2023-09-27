#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 1, 1, -1, -1};
int dx[]={1, -1, 0, 0, 1, -1, -1, 1};

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define mp make_pair
#define fi first
#define sc second
typedef pair<int,int> P;
typedef pair<P,int> Pp;
int h,w,n;
char s[2000][2000];
bool used[2000][2000];
int bfs(int m){
    REP(i,h)
        REP(j,w)
            used[i][j] = false;
    int sx,sy;char c;
    if(m == 0)
        c = 'S';
    else
        c = m + '0';
    REP(i,h)
        REP(j,w)
            if(c == s[i][j]){sx = i;sy = j;}
    queue<Pp> que;
    REP(i,4){
        int x = sx + dx[i],y = sy + dy[i];
        if((0 <= x && x < h && 0 <= y && y < w) && s[x][y] != 'X' && !used[x][y]){
            if(s[x][y] == m  + 1 + '0')
                return 1;
            que.push(Pp(P(x,y),1));
            used[x][y] = true;
        }
    }
    while(!que.empty()){
        Pp p = que.front();que.pop();

        REP(i,4){
            int x = p.fi.fi + dx[i],y = p.fi.sc + dy[i];
            if((0 <= x && x < h && 0 <= y && y < w) && s[x][y] != 'X' && !used[x][y]){
                if(s[x][y] == m + 1 + '0')
                    return p.sc + 1;
                que.push(Pp(P(x,y),p.sc + 1));
                used[x][y] = true;
            }
        }
    }
    return 1000000000;
}
int main(){
    scanf("%d%d%d",&h,&w,&n);
    REP(i,h)
        scanf("%s",s + i);

    int sum = 0;
    FOR(i,0,n){
        sum += bfs(i);
    }
    printf("%d\n", sum);
    return 0;
}