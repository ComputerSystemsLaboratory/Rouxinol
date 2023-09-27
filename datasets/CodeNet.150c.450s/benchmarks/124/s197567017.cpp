#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
using P = pair<int,int>;

/* 大文字を小文字に変換 */
char tolower(char c) {return (c + 0x20);}
/* 小文字を大文字に変換 */
char toupr(char c) {return (c - 0x20);}

// if('A'<=s[i] && s[i]<='Z') s[i] += 'a'-'A';

/*
string s = "abcdefg"
s.substr(4) "efg"
s.substr(0,3) "abc"
s.substr(2,4) "cdef"

// イテレータ要素のインデックス
distance(A.begin(), itr);
*/

const int MAX_N = 105, INF = 1001001000;
const int WHITE = 0, GRAY = 1, BLACK = 2;

int n;
int M[MAX_N][MAX_N], color[MAX_N], d[MAX_N], p[MAX_N];

void init(){
    rep(i,n){
        rep(j,n) M[i][j] = -1;
        color[i] = WHITE;
        d[i] = INF;
    }
}

void dijkstra(int u){
    d[u] = 0;
    p[u] = -1;
    while(true){
        // 第一段階：次に更新する辺を決定する
        int mincost = INF;
        rep(i,n){
            if(color[i] != BLACK && mincost > d[i]){
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INF) break;   // 全ての辺の最小コストが無限大であることはないので、全ての頂点のcolorがBLACKになったということ
        color[u] = BLACK;   // 現時点で最短経路木に含まれない中で最短のものを最短経路木に含める
        // 第二段階:ただいま最短経路木に含めた頂点に隣接する頂点への最短経路を更新する
        rep(v,n){
            if(color[v] != BLACK && M[u][v] != -1){
                if(d[v] > M[u][v] + d[u]){
                    d[v] = M[u][v] + d[u];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
}

int main()
{
    cin >> n;
    init();
    rep(i,n){
        int u; cin >> u;
        int k; cin >> k;
        rep(_,k){
            int v,c; cin >> v >> c;
            M[u][v] = c;
        }
    }
    dijkstra(0);
    rep(i,n){
        printf("%d %d\n", i, d[i]);
    }
}
