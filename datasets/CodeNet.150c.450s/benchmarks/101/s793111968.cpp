#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
#define rep(i, n) for(int i=0;i<n;i++)
#define FOR(i, j, n) for(int i=j;i<n;i++)
#define NOT_FOUND 0
using namespace std;

vector<int> graph[100001];
int memo[100001];

int dfs(int start, int label) {
    stack<int> stack;
    stack.push(start);
    memo[start] = label;

    while(!stack.empty()) {
        int v = stack.top();
        stack.pop();
        vector<int> edges = graph[v];

        rep(i, edges.size()) {
            int next = edges[i];
            if (memo[next] == 0) {
                memo[next] = label;
                stack.push(next);
            }
        }
    }
    return 1;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int v, e;
        cin >> v >> e;
        graph[v].push_back(e);
        graph[e].push_back(v);
    }

    memset(memo, 0, sizeof(memo));
    int id = 1;
    rep(i, n) {
        if (memo[i] == 0) {
            dfs(i, id++);
        }
    }

    int q;
    cin >> q;
    rep(i, q) {
        int s, d;
        cin >> s >> d;
        if (memo[s] == memo[d]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}