#include <iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#define MAX 100000

using namespace std;
vector<int> G[MAX];
int color[MAX], n;

void dfs_visit(int r, int id) { //???????????°
    stack<int> S;
    S.push(r);
    color[r] = id;
    while(!S.empty()) {
        int u = S.top();
        S.pop();
        for(int i = 0; i < G[u].size(); i++) {
            int v = G[u][i];
            if(color[v] == -1) {
                color[v] = id;
                S.push(v);
            }
        }
    }
}

void assignColor() { // ?????????????????°
    int id = 1;
    for(int i = 0; i < n; i++) {
        color[i] = -1;
    }
    for(int i = 0; i < n; i++) {
        if(color[i] == -1)
            dfs_visit(i, id++);
    }
}

int main()
{
    int m;
    scanf("%d%d", &n, &m);

    int s, t;
    for(int i = 0; i < m; i++) {
        scanf("%d%d", &s, &t);
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
        scanf("%d%d", &s, &t);
        if(color[s] == color[t])
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}