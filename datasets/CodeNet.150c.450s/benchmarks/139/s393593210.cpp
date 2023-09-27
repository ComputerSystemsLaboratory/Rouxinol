#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846

long N, M;
vector<list<long>> G;
vector<long> visited;

int main(void) {

    cin >> N >> M;
    G.resize(N+1, list<long>());
    for (long i = 0; i < M; i++) {
        long a, b; cin >> a >> b;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

    visited.resize(N+1);
    visited.at(1) = 1;
    queue<long> q;
    for (auto e: G.at(1)) {
        q.push(e);
        visited.at(e) = 1;
    }

    while (q.size() > 0) {
        auto e = q.front();
        q.pop();
        for (auto f: G.at(e)) {
            if (visited.at(f)) continue;
            visited.at(f) = e;
            q.push(f);
        }
    }

    cout << "Yes" << endl;
    for (long i = 2; i <= N; i++) {
        cout << visited.at(i) << endl;
    }

    return 0;
}