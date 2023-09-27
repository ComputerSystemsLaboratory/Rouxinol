#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

#define N 100005
#define UNDEFINED -1

int n, m, s, t, q;
std::vector<int> adj[N];
int group[N];

void dfs(int x, int g) {
    std::stack<int> S;
    S.push(x);
    group[x] = g;
    while(!S.empty()) {
        int u = S.top(); S.pop();
        for(int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];
            if(group[v] == UNDEFINED) {
                group[v] = g;
                S.push(v);
            }
        }
    }
}

int main() {
    for(int i = 0; i < N; i++) {
        group[i] = UNDEFINED;
    }

    std::cin >> n >> m;
    for(int i = 0; i < m; i++) {
        std::cin >> s >> t;
        adj[s].push_back(t);
        adj[t].push_back(s);
    }

    int g = 0;
    for(int i = 0; i < n; i++) {
        if(group[i] == UNDEFINED) {
            dfs(i, g++);
        }
    }


    std::cin >> q;
    for(int i = 0; i < q; i++) {
        std::cin >> s >> t;
        if(group[s] != UNDEFINED && group[t] != UNDEFINED && group[s] == group[t]) {
            puts("yes");
        } else {
            puts("no");
        }
    }
    return 0;
}

