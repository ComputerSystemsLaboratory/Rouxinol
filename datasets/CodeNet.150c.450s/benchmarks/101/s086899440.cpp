//
// Created by tattsun on 2017/02/14.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define VERTEX_MAX 100001

typedef vector<int> Vertex;

int color = 0;
int n, m;
Vertex vs[VERTEX_MAX];
int cs[VERTEX_MAX];

void _dfs(int color, int i) {
    cs[i] = color;

    auto& v = vs[i];
    for(auto it = v.begin(); it != v.end(); it++) {
        if(cs[*it] != -1)
            continue;

        _dfs(color, *it);
    }
}

void dfs() {
    for(int i=0; i<n; i++) {
        if(cs[i] != -1)
            continue;

        _dfs(color, i);
        color++;
    }
}

int main() {
    for(int i=0; i<VERTEX_MAX; i++)
        cs[i] = -1;

    cin >> n >> m;

    int a, b;
    for(int i=0; i<m; i++) {
        cin >> a >> b;
        vs[a].push_back(b);
        vs[b].push_back(a);
    }

    dfs();

    int q;
    cin >> q;
    for(int i=0; i<q; i++) {
        cin >> a >> b;
        if(cs[a] == cs[b] && cs[a] != -1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}