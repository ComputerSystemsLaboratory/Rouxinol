//
// Created by tattsun on 2017/02/13.
//

#include <iostream>
#include <vector>

using namespace std;

#define VERTEX_MAX_NUM 101
#define NIL -1

int now = 0;
int n;
int start[VERTEX_MAX_NUM];
int finish[VERTEX_MAX_NUM];
bool visited[VERTEX_MAX_NUM];
vector<int> vertexes[VERTEX_MAX_NUM];

void _dfs(int node) {
    start[node] = ++now;
    visited[node] = true;

    auto& v = vertexes[node];

    for(auto it = v.begin(); it != v.end(); it++) {
        if(visited[*it])
            continue;
        _dfs(*it);
    }

    finish[node] = ++now;
}

void dfs() {
    for(int i=1; i<=n; i++) {
        if(visited[i]) continue;
        _dfs(i);
    }
}

int main() {
    for(int i=0; i<VERTEX_MAX_NUM; i++) {
        start[i] = NIL;
        finish[i] = NIL;
        visited[i] = false;
    }

    cin >> n;

    int u, k, p;
    for(int i=1; i<=n; i++) {
        cin >> u >> k;
        for(int j=0; j<k; j++) {
            cin >> p;
            vertexes[i].push_back(p);
        }
    }

    dfs();

    for(int i=1; i<=n; i++) {
        cout << i << " " << start[i] << " " << finish[i] << endl;
    }
}