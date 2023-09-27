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

int main()
{
    int n; cin >> n;
    vector<int> to[n];
    rep(_,n){
        int u; cin >> u; --u;
        int k; cin >> k;
        rep(i,k){
            int v; cin >> v; --v;
            to[u].push_back(v);
        }
    }

    int dist[n];
    rep(i,n) dist[i] = -1;

    queue<int> q;
    q.push(0);
    dist[0] = 0;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v: to[u]){
            if(dist[v] == -1){
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
    rep(i,n){
        printf("%d %d\n", i+1, dist[i]);
    }
}
