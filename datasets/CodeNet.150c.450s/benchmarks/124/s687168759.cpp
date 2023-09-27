#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

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
*/
static const int MAX_N = 110;
static const int WHITE=0, GRAY=1, BLACK=2;
static const int INF = pow(10,8);

int color[MAX_N], M[MAX_N][MAX_N], d[MAX_N], p[MAX_N];
int N;

void dijkstra(int s){
    d[s] = 0; p[s] = -1;
    color[s] = GRAY;
    while(true){
        int minv = INF;
        int u = -1;
        rep(i,N){
            if(color[i] != BLACK && d[i] < minv){
                minv = d[i];
                u = i;
            }
        }

        if(u == -1) break;   // 全頂点への最短経路を調べ終えたということ

        color[u] = BLACK;
        rep(v,N){
            if(color[v] != BLACK && M[u][v] != INF){
                if(d[u]+M[u][v] < d[v]){
                    d[v] = d[u] + M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    rep(i,N){
        printf("%d %d\n", i, d[i]);
    }
}

int main()
{
    cin >> N;
    // 初期化
    rep(i,N){
        color[i] = WHITE; d[i] = INF;
        rep(j,N) M[i][j] = INF;
    }
    // 読み込み
    rep(i,N){
        int u, k; cin >> u >> k;
        rep(j,k){
            int v, c; cin >> v >> c;
            M[u][v] = c;
        }
    }
    dijkstra(0);
}
