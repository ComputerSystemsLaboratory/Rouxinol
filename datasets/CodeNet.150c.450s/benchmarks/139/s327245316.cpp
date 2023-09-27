#include <bits/stdc++.h>


using namespace std;


int main(void) {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N + 1);
    vector<bool> discovered(N + 1, false);
    vector<int> sign(N + 1);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    discovered[1] = true;
    while (!q.empty()) {
        int now = q.front();
        q.pop();

        for (auto e : graph[now]) {
            if (discovered[e])
                continue;
            sign[e] = now;
            discovered[e] = true;
            q.push(e);
        }
    }

    bool success = true;
    for (int i = 1; i <= N; i++) {
        if (!discovered[i]) {
            success = false;
            break;
        }
    }
    if (success) {
        cout << "Yes" << endl;
        for (int i = 2; i <= N; i++) {
            cout << sign[i] << endl;
        }
    } else {
        cout << "No" << endl;
    }
}
