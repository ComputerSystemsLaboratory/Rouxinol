#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(vector<T>& vec) {
    cout << "print_vector -> ";
    for(int i=0; i<vec.size(); i++) {
        if(i == vec.size()-1) {
            cout << vec[i] << endl;
        }
        else {
            cout << vec[i] << " ";
        }
    }
    return;
}

vector<int> path[100010];

int main() {

    int N, M;
    cin >> N >> M;
    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        path[a].push_back(b);
        path[b].push_back(a);
    }

    queue<int> q;
    q.push(0);
    vector<int> pre(N, -1);

    while(!q.empty()) {
        int node = q.front(); q.pop();
        for(int i=0; i<path[node].size(); i++) {
            if(pre[path[node][i]] == -1) {
                pre[path[node][i]] = node;
                q.push(path[node][i]);
            }
        }
    }

    cout << "Yes" << endl;
    for(int i=1; i<N; i++) {
        cout << pre[i] + 1 << endl;
    }

    return 0;
}