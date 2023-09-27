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

const int MAX_N = 105, INF = 10000;
const int WHITE = 0, GRAY = 1, BLACK = 2;

int n;
int M[MAX_N][MAX_N], color[MAX_N], d[MAX_N], p[MAX_N];

void init(){
    rep(i,MAX_N){
        rep(j,MAX_N) M[i][j] = -1;
        color[i] = WHITE;
        d[i] = INF;
    }
}

void prim(int u){
    d[u] = 0;
    p[u] = -1;

    while(true){
        int mincost = INF;
        rep(i,n){
            if(color[i] != BLACK && mincost > d[i]){
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INF) break;
        color[u] = BLACK;
        rep(v,n){
            if(color[v] != BLACK && M[u][v] != -1){
                if(M[u][v] < d[v]){
                    d[v] = M[u][v];
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
        rep(j,n){
            int aij; cin >> aij;
            if(aij != -1) M[i][j] = aij;
        }
    }
    prim(0);
    int sum = 0;
    rep(i,n) sum += d[i];
    cout << sum << endl;
}
