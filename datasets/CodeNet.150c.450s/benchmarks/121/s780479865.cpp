#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <cstring>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
using namespace std;
 
typedef list<int> L;
typedef pair <int,int> P;
typedef vector<int> V;
typedef queue<P> Q;
typedef stack<int> S;
typedef map<string,int> M;
 
const int MAX = 100;
const int INF = -1;
 
int h, w, d[MAX][MAX];
char f[MAX][MAX];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
 
int bfs () {
    int res = 0;
    memset(d, INF, sizeof(d));
 
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (d[i][j] == INF) {
                Q q;
                q.push(P(i,j));
 
                d[i][j] = res;
 
                while (q.size()) {
                    P p = q.front(); q.pop();
                    for (int k = 0; k < 4; k++) {
                        int nx = p.first + dx[k], ny = p.second + dy[k];
                        if (0 <= nx && nx < h && 0 <= ny && ny < w && d[nx][ny] == INF && f[p.first][p.second] == f[nx][ny]) {
                            d[nx][ny] = res;
                            q.push(P(nx,ny));
                        }
                    }
                }
 
                res++;
            }
        }
    }
 
    return res;
}
 
int main()
{
    while (cin >> h >> w, h) {
        for (int i = 0; i < h; i++)
            cin >> f[i];
        cout << bfs() << endl;
    }
 
    return 0;
}