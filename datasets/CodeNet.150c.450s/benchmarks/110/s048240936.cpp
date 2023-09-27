//#include "stdafx.h"
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <string>
#include <cstring>
#include <iterator>
#define FI first
#define SE second
#define PF push_front
#define PB push_back
#define POF pop_front
#define POB pop_back
#define MA make_pair
#define ll long long
#define VE vector<int>
#define VP vector<pair<int,int> >
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)
#define YES(i) cout<<(i?"YES":"NO")<<endl
#define Yes(i) cout<<(i?"Yes":"No")<<endl
using namespace std;
//
const int INF = 1e9 + 7;
const int mod = 1e9 + 7;
//
int H, W, N;
char M[1000][1000];
pair<int, int> n[10];
bool used[1000][1000];
int dx[4] = { 0,-1,0,1 }, dy[4] = { -1,0,1,0 };
//
int BFS(int num) {
    int sx = n[num - 1].FI, sy = n[num - 1].SE;
    int gx = n[num].FI, gy = n[num].SE;
    deque<pair<pair<int,int> , int> > que;
    que.PB(MA(MA(sx,sy),0));
    FOR(i, 0, H) {
        FOR(j, 0, W) {
            used[i][j] = false;
        }
    }
    used[sx][sy] = true;
    while (!que.empty()) {
        pair<pair<int,int> , int> P= que.front();
        que.pop_front();
        if (P.FI.FI == gx&&P.FI.SE==gy) {
            return P.SE;
        }
        FOR(i, 0, 4) {
            int nx = P.FI.FI + dx[i], ny = P.FI.SE + dy[i];
            if (0 <= nx && nx < H && 0 <= ny && ny < W && !used[nx][ny] && M[nx][ny] != 'X') {
                que.PB(MA(MA(nx, ny), P.SE + 1));
                used[nx][ny] = true;
            }
        }
    }
}
int main() {
    cin >> H >> W >> N;
    FOR(i, 0, H) {
        FOR(j, 0, W) {
            cin >> M[i][j];
            if (M[i][j]=='S') {
                n[0] = MA(i, j);
            }
            else if ('1' <= M[i][j] && M[i][j] <= '9') {
                n[M[i][j] - '0'] = MA(i, j);
            }
        }
    }
    int ans = 0;
    FOR(i, 1, N + 1) {
        ans += BFS(i);
    }
    cout << ans << endl;
    return 0;
}

