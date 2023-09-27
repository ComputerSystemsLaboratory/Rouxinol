#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
using ll  = long long;
using pii = pair<ll,ll>;
using vl  = vector<ll>;
using vvl = vector<vl>;

#define rep(i,n) for(int i = 0; i < (n); ++i)
#define per(i,n) for(int i = (n)-1; i >= 0; --i)
#define rng(i,a,b) for(int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()


int main() {
    int N, M;
    cin >> N >> M;
    vvl edges(N);
    vl ans(N,-1);
    rep(i,M) {
        int A, B;
        scanf("%d %d", &A, &B); A--; B--;
        edges[A].push_back(B);
        edges[B].push_back(A);
    }
    priority_queue<pair<int, pii>> que;
    for (auto to : edges[0]) {
        que.push(mp(-0, pii(0, to)));
    }
    while (!que.empty()) {
        int d = -que.top().first;
        int pre = que.top().second.first;
        int now = que.top().second.second;
        que.pop();
        if (ans[now] != -1) continue;
        // cerr << now+1 << endl;
        ans[now] = pre;
        for (auto to : edges[now]) {
            if (to == pre) continue;
            que.push(mp(-d-1, pii(now, to)));
        }
    }
    cout << "Yes" << endl;
    rep(i,N-1) {
        cout << ans[i+1]+1 << endl;
    }
    return 0;
}
