#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;

#define PI         acos(-1.0)
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

typedef long long ll;

const ll INF = 999999;

int W, H, N;
queue<pair<ll, ll> > que; // ??§?¨? ???????????¢
vector<string> vs;
ll d[1010][1010];
ll st, gl, goal[10];

ll Z(int y, int x){
    return 1010 * y + x;
}

int main(){
    cin >> H >> W >> N;
    vs.resize(H);
    FOR(i,0,H) cin >> vs[i];
    FOR(y,0,H){
        FOR(x,0,W){
            if(vs[y][x]=='S') st = Z(y,x);
            if(vs[y][x]>='1' && vs[y][x]<='9') goal[vs[y][x]-'0'] = Z(y,x);
        }
    }

    // ?????????

    int vx[4] = {0,1,0,-1};
    int vy[4] = {-1,0,1,0};

    int n = 1;
    int ans = 0;
    while(n<=N){
        st = n==1?st:goal[n-1];
        gl = goal[n];

        FOR(i,0,H) FOR(j,0,W) d[i][j] = INF;
        while(!que.empty()) que.pop();
        que.push(make_pair(st, 0));
        d[st/1010][st%1010] = 0;
        while(!que.empty()){
            int nowy = que.front().first / 1010;
            int nowx = que.front().first % 1010;
            int nowd = que.front().second;
            que.pop();
            if(d[nowy][nowx] < nowd) continue;
            FOR(i,0,4){
                int nexty = nowy + vy[i];
                int nextx = nowx + vx[i];
                if(nexty < 0 || nexty >= H || nextx < 0 || nextx >= W) continue;
                if(vs[nexty][nextx]=='X') continue;
                int nextd = nowd + 1;

                if(d[nexty][nextx] > nextd){
                    d[nexty][nextx] = nextd;
                    que.push(make_pair(Z(nexty,nextx), nextd));
                }
            }
        }

        ans += d[gl/1010][gl%1010];
        n++;
    }
    cout << ans << endl;
    return 0;
}