#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll N, M, A, B;


void search(int start, vector<vector<ll>> &path, vector<ll> &dis, vector<ll> &prev) {
    priority_queue<P, vector<P>, greater<P>> pq;
    dis.at(start) = 0;
    pq.emplace(dis.at(start), start);
    while (!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int room = p.second;
        if (dis.at(room) < p.first) continue;
        for (auto &x : path.at(room)) {
            if (dis.at(x) > dis.at(room) + 1) {
                dis.at(x) = dis.at(room) + 1;
                prev.at(x) = room;
                pq.emplace(dis.at(x), x);
            }
        }
    }
}

int main() {
    cin >> N >> M;
    vector<vector<ll>> path(N+1);
    vector<ll> dis(N+1, INFINITY), prev(N+1, -1);
    rep(i,M) {
        cin >> A >> B;
        path.at(A).push_back(B);
        path.at(B).push_back(A);
    }
    for (int i = 1; i <= N; ++i) {
        if (path.at(i).empty()) {
            cout << "No" << endl;
            return 0;
        }
    }

    search(1, path, dis, prev);
    cout << "Yes" << endl;
    for (int i = 2; i <= N; ++i) cout << prev.at(i) << endl;
}

