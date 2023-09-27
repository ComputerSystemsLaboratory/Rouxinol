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

const int MAX_N = 100100;
const int NO = -1;
const int WHITE = 0, GRAY = 1, BLACK = 2;

int n, m;
vector<int> adl[MAX_N]; // 隣接リスト
int color[MAX_N], group[MAX_N];
queue<int> Q;

void init(){
    rep(i,MAX_N){
        color[i] = WHITE;
        group[i] = NO;
    }
}

void bfs(int u, int c){
    color[u] = GRAY;
    group[u] = c;
    Q.push(u);

    while(!Q.empty()){
        u = Q.front(); Q.pop();
        for(auto v: adl[u]){
            if(color[v] == WHITE){
                color[v] = GRAY;
                group[v] = c;
                Q.push(v);
            }
        }
        color[u] = BLACK;
    }
}

void bfs_visit(){
    rep(i,n){
        if(group[i] == NO) bfs(i, i);
    }
}

int main()
{
    cin >> n >> m;
    init();
    rep(i,m){
        int s, t; cin >> s >> t;
        adl[s].push_back(t);
        adl[t].push_back(s);
    }
    bfs_visit();
    int q; cin >> q;
    rep(_,q){
        int s, t; cin >> s >> t;
        if(group[s] == group[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    //rep(i,n) cout << group[i] << endl;
}
