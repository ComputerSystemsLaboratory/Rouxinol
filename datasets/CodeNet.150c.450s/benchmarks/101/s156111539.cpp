#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int MAX = 100000;

vector<vector<int>> user(MAX, vector<int>(0));
vector<int> group(MAX, -1);

// 模範回答
// void dfs(int start, int group_i) {
//     stack<int> s;
//     group[start] = group_i;
//     s.push(start);
//     while (!s.empty()) {
//         int current = s.top();
//         s.pop();
//         for (int i = 0; i < user[current].size(); i++) {
//             int adj = user[current][i];
//             if (group[adj] == NIL) {
//                 s.push(adj);
//                 group[adj] = group_i;
//             }
//         }
//     }
// }

// 再帰によるdfs
void dfs(int start, int group_i) {
    group[start] = group_i;
    rep(i, user[start].size()) {
        int adj = user[start][i];
        if (group[adj] == -1) {
            dfs(adj, group_i);
        }
    }
}

// スタックによるdfsパターン1
// void dfs(int start, int group_i) {
//     stack<int> s;
//     group[start] = group_i;
//     s.push(start);
//     while (!s.empty()) {
//         int current = s.top();
//         group[current] = group_i;
//         bool stop = true;
//         for (int i = 0; i < user[current].size(); i++) {
//             int adj = user[current][i];
//             if (group[adj] == -1) {
//                 s.push(adj);
//                 stop = false;
//                 break;
//             }
//         }
//         if (stop) s.pop();
//     }
// }

int main() {
    int n, m, s, t, q;
    scanf("%d %d", &n, &m);
    rep(i, m) {
        scanf("%d %d", &s, &t);
        user[s].push_back(t);
        user[t].push_back(s);
    }

    int group_i = 0;
    rep(i, n) {
        if (group[i] == -1) {
            dfs(i, group_i++);
        }
    }

    scanf("%d", &q);
    rep(i, q) {
        scanf("%d %d", &s, &t);
        if (group[s] == group[t]) printf("yes\n");
        else printf("no\n");
    }
}
