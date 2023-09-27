#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <stack>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(i=a; i<n; i++)
#define rep(i,n) REP(i,0,n)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define foreach(it,x) for(typeof(x.begin()) it=x.begin(); it!=x.end(); it++)

const int dx[] = {0,0,1,-1};
const int dy[] = {1,-1,0,0};
int N,M,ope[33],dist[33];
bool field[33][33];

void input(){
    int i;
    rep(i,N){
        int x,y; cin >> x >> y;
        field[y][x] = true;
    }
    cin >> M;
    rep(i,M){
        char dir; cin >> dir >> dist[i];
        if( dir == 'S' ) ope[i] = 1;
        if( dir == 'N' ) ope[i] = 0;
        if( dir == 'E' ) ope[i] = 2;
        if( dir == 'W' ) ope[i] = 3;
        //cout << "dir=" << dir << " , dist=" << dist[i] << endl;
    }
}

int main(){
    int i;

    while( cin >> N, N ){
        memset(field, false, sizeof(field));
        input();

        int cnt = 0;
        int sx = 10, sy = 10;

        rep(i,M){
            int tx = sx + dx[ope[i]] * dist[i];
            int ty = sy + dy[ope[i]] * dist[i];
            for(;;){
                //printf("(%d,%d)\n",sx,sy);
                if( field[sy][sx] ){
                    field[sy][sx] = false;
                    cnt++;
                }
                if( tx == sx && ty == sy ) break;
                sx += dx[ope[i]];
                sy += dy[ope[i]];
            }
        }
        puts(cnt == N ? "Yes" : "No");
    }
    return 0;
}