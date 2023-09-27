#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

typedef pair<int, int> P;

bool isokay(vector<P> v, P p) {
    REP(i, v.size()) {
        if (v[i].first == p.first && v[i].second == p.second) return false;
    }
    return true;
}

void solve15(int a, int b) {
    int n;
    cin >> n;
    vector<P> v;
    REP(i,n) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    queue<P> que;
    int ans = 0;
    que.push(make_pair(1, 1));
    while(que.size()) {
        P pos = que.front(); que.pop();
        if (pos.first == a) {
            if (pos.second == b) ans++;
            else {
                P p = make_pair(pos.first, pos.second + 1);
                if (isokay(v, p)) que.push(p);
            }
        }else {
            if (pos.second == b) {
                P p = make_pair(pos.first + 1, pos.second);
                if (isokay(v, p)) que.push(p);
            }
            else {
                P p = make_pair(pos.first, pos.second + 1);
                if (isokay(v, p)) que.push(p);
                p = make_pair(pos.first + 1, pos.second);
                if (isokay(v, p)) que.push(p);
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int a, b;
    while(cin >> a >> b, a+b) {
        solve15(a, b);
    }
    return 0;
}