#include <bits/stdc++.h>
using namespace std;
int main() {
    int V, E;
    cin >> V >> E;
    vector<vector<int>> G(V);
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        G[a - 1].push_back({b - 1});
        G[b - 1].push_back({a - 1});
    }
    vector<bool> seen(V, false);  // 既に見たことがある頂点か記録する
    vector<int> c(V);   //道しるべ
    queue<int> que;
    que.emplace(0);  // 0から探索する
    seen[0] = true;
    while (que.size() != 0) {     // 幅優先探索
        int state = que.front();  // 現在の状態
        que.pop();
        for (auto next : G[state]) {
            if (!seen[next]) {  // 未探索の時のみ行う
                seen[next] = true;
                c[next] = state;
                que.emplace(next);  //次の状態をqueueへ格納
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < V; i++) {
        cout << c[i] + 1 << endl;
    }
    return 0;
}
