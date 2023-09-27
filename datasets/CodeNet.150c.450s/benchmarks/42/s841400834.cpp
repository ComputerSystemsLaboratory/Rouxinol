#include <iostream>
#include <string>
#include <utility>
#include <queue>

using namespace std;

typedef pair<string, int> P;

int N, Q;
queue<P> RR;

void solve() {
    int t = 0;
    while (!RR.empty()) {
        P p = RR.front(); RR.pop();
        int r = p.second - Q;
        if (r <= 0) {
            t += p.second;
            cout << p.first << " " << t << endl;
        } else {
            t += Q;
            RR.push(P(p.first, r));
        }
    }
}

int main() {
    cin >> N >> Q;
    for (int i = 0; i < N; i++) {
        string name;
        int t;
        cin >> name >> t;
        RR.push(P(name, t));
    }
    solve();
    return 0;
}