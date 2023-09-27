#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<sstream>
#include<stack>
#include<functional>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF=0x3f3f3f3f;
const int MAX_N = 10;
const int MAX_H = 1005;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {1, -1, 0, 0};
struct T{
    int x,y;
};//坐?
char G[MAX_H][MAX_H];
T aim[MAX_N];
int vis[MAX_H][MAX_H]; // ???数
int H, W, N;
T s, t; //起点，?点

int bfs(){
    for(int i = 0; i < H; i++)
        for(int j = 0; j < W; j++)
            vis[i][j] = -1;
    queue<T> q;
    q.push(s);
    vis[s.x][s.y] = 0;
    while(!q.empty()){
        T cur = q.front();
        q.pop();
        if(cur.x == t.x && cur.y == t.y)break;
        for(int i = 0; i < 4; i++){
            T nxt;
            nxt.x = cur.x + dx[i];
            nxt.y = cur.y + dy[i];
            if(nxt.x >= 0 && nxt.x < H && nxt.y >= 0 && nxt.y < W && vis[nxt.x][nxt.y] == -1 && G[nxt.x][nxt.y] != 'X'){
                q.push(nxt);
                vis[nxt.x][nxt.y] = vis[cur.x][cur.y] + 1;
            }
        }
    }
    return vis[t.x][t.y];
}

void solve(){
    int ans = 0;
	for(int i = 0; i < N; i++){
        t = aim[i]; //?个?酪??点
        ans += bfs();
        s = t; //?次?点??下次起点
        G[s.x][s.y] = '.';
	}
	cout << ans << endl;
}
int main()
{
	#ifdef LOCAL
		freopen("in.txt","r",stdin);
	//	freopen("out.txt","w",stdout);
	#endif
	//ios::sync_with_stdio(false);
	cin >> H >> W >> N;
	int p = 0;
	for(int i = 0; i < H; i++){
        scanf("%s", G[i]);
        for(int j = 0; j < W; j++){
            if(G[i][j] == 'S'){
                s.x = i;s.y =j;
                G[i][j] = '.';
            }
            else if(G[i][j] <= '9' && G[i][j] >= 0){
                int num = G[i][j] - '0' - 1;
                aim[num].x = i;aim[num].y = j;
            }
        }
	}
	solve();
	return 0;
}