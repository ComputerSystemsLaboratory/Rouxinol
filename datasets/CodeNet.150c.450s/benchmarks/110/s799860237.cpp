#include "bits/stdc++.h"

using namespace std;

//#define int long long

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

#define pb push_back
#define VDEL(v, n) v.erase(v.begin() + (n))
#define ALL(v) v.begin(), v.end()

#define INTMAX 2147483647
#define INF 200000000
#define TINT(str) atoi(str.c_str())
#define TSTR(num) to_string(num)

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<vector<int>> VII;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

PII goal[10];
char k[1000][1000];
int fx, fy;
int H,W;

int BFS(int x, int y)
{
    VII cost;
    cost = VII(H, VI(W, INT_MAX));

    cost[fx][fy] = 0;

    queue<PII> q;

    q.push(make_pair(fx, fy));

    while(!q.empty())
    {
        PII now = q.front();
        q.pop();
        int nx = now.first;
        int ny = now.second; 

        if(nx == x && ny == y)
        {
            return cost[nx][ny];
        }

        REP(i, 4)
        {
            if(nx + dx[i] >= H ||
            nx + dx[i] < 0) continue;
            if(ny + dy[i] >= W || 
            ny + dy[i] < 0) continue;

            if(k[nx + dx[i]][ny + dy[i]] != 'X')
            {
                if(cost[nx + dx[i]][ny + dy[i]] > 
                cost[nx][ny] + 1)
                {
                    cost[nx + dx[i]][ny + dy[i]] =
                        cost[nx][ny] + 1;
                    q.push(make_pair(nx + dx[i], ny + dy[i]));
                }
            }
        }
    }

    return -1;
}

signed main()
{
    int N;
    cin >> H >> W >> N;

    char str[1001];
    REP(h, H)
    {
        scanf("%s", str);
        REP(w, W)
        {
            k[h][w] = str[w];
            if(k[h][w] == 'S')
            {
                fx = h;
                fy = w;
            }
            if(k[h][w] != '.' &&
                k[h][w] != 'X')
            {
                goal[k[h][w] - '1'] = make_pair(h, w);
            }
        }
    }
    int ans = 0;

    REP(i, N)
    {
        ans += BFS(goal[i].first, goal[i].second);
        fx = goal[i].first;
        fy = goal[i].second;
    }

    cout << ans << endl;

    return 0;
}

