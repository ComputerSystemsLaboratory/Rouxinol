#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

struct E {
    int time, c;
    E(int time, int c) : time(time), c(c) {}
    bool operator<(const E& e) const {
        if (time == e.time) {
            return c < e.c;
        }
        return time < e.time;
    }
};

int N;
vector<E> es;
bool input() {
    es.clear();
    scanf("%d\n", &N);
    if (N == 0) return false;
    for (int i = 0; i < N; i++) {
        int h, m, s;
        scanf("%d:%d:%d", &h, &m, &s);
        int from = h * 3600 + m * 60 + s;
        es.push_back(E(from, +1));
        scanf(" %d:%d:%d\n", &h, &m, &s);
        int to = h * 3600 + m * 60 + s;
        es.push_back(E(to, -1));
    }
    return true;
}

void solve() {
    sort(es.begin(), es.end());
    int ans = 0;
    int pool = 0;
    for (int i = 0; i < es.size(); i++) {
        const E& e = es[i];
        if (e.c == 1) {
            if (pool > 0) pool--;
            else ans++;
        } else {
            pool++;
        }
    }
    printf("%d\n", ans);
}

int main() {
    while (input()) solve();
    return 0;
}
    