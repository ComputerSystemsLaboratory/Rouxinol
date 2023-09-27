#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

#define FOR(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
typedef long double ld;
using namespace std;

void solver() {
    int w, n;
    vector<int> a, b;
    vector<pair<int, int>> ans;
    cin >> w;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int ta, tb;
        scanf("%d,%d", &ta, &tb);
        a.push_back(ta);
        b.push_back(tb);
    }

    FOR(i, w) {
        auto p = i + 1;
        FOR(j, n) {
            if (p == a[j]) {
                p = b[j];
            } else if (p == b[j]) {
                p = a[j];
            }
        }
        ans.push_back({p, i + 1});
    }
    sort(ans.begin(), ans.end());

    FOR(i, w) cout << ans[i].second << endl;
}

int main() {
    solver();
    return 0;
}