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

int H, W;
bool visited[111][111];
vector<string> vs;

int dfs(int y, int x, char c){
    int ret = 0;
    if(y < 0 || y >= H || x < 0 || x >= W) return ret;
    if(visited[y][x]) return ret;
    if(c!=vs[y][x]) return ret;
    char now = vs[y][x];
    ret++;
    visited[y][x] = true;
    ret += dfs(y+1, x, now);
    ret += dfs(y-1, x, now);
    ret += dfs(y, x+1, now);
    ret += dfs(y, x-1, now);
    return ret;
}

int main(){
    while(1){
        cin >> H >> W;
        if(H==0&&W==0) break;
        vs.resize(H);
        FOR(i,0,H)FOR(j,0,W)visited[i][j] = false;
        FOR(y,0,H){
            string s;
            cin >> s;
            vs[y] = s;
        }
        int ans = 0;
        FOR(y,0,H){
            FOR(x,0,W){
                if(dfs(y,x,vs[y][x])) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}