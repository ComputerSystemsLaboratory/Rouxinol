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

const int INF = 1000100100;
const int MAX_V = 100100, MAX_E = 500500;
const int WHITE = 0, GRAY = 1, BLACK = 2;

int v, e;
vector<P> to[MAX_V];
int dis[MAX_V], color[MAX_V];

void dijkstra(int s){
    fill(dis, dis+MAX_V, INF);
    fill(color, color+MAX_V, WHITE);

    color[s] = BLACK;
    dis[s] = 0;
    priority_queue<P> pq;
    pq.push(make_pair(-dis[s], s));
    while(!pq.empty()){
        P pu = pq.top(); pq.pop();
        int u = pu.second; int udis = -pu.first;
        color[u] = BLACK;
        for(P pv: to[u]){
            int v = pv.first; int vc = pv.second;
            if(color[v] != BLACK && dis[v]>udis+vc){
                dis[v] = udis+vc;
                pq.push(make_pair(-dis[v], v));
            }
        }
    }
}

int main()
{
    int s;
    cin >> v >> e >> s;
    rep(i,e){
        int si, ti, di; cin >> si >> ti >> di;
        to[si].push_back(make_pair(ti, di));
    }

    dijkstra(s);

    rep(i,v){
        if(dis[i] == INF) cout << "INF" << endl;
        else cout << dis[i] << endl;
    }
}
