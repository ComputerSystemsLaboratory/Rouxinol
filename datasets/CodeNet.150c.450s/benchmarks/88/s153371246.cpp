#include <iostream>
#include <utility>

using namespace std;

int square(int x) {return x*x;}

bool comp(pair<int, int> p, pair<int, int> q) {
    int hai = square(p.first)+square(p.second);
    int iie = square(q.first)+square(q.second);
    if (hai < iie) return true;
    if (hai > iie) return false;
    if (p.first < q.first) return true;
    return false;
}

void solve(int h, int w) {
    pair<int, int> target;
    target.first = h; target.second = w;
    pair<int, int> ans;
    ans.first = 201, ans.second = 201;
    for (int i = 1; i <= 200; i++) for (int j = i+1; j <= 200; j++) {
        pair<int, int> tmp;
        tmp.first = i; tmp.second = j;
        if (comp(target, tmp)) {
            if (comp(tmp, ans)) ans = tmp;
        }
    }
    cout << ans.first << " " << ans.second << endl;
}

int main() {
    int h, w;
    while (cin >> h >> w) {
        if (h == 0 && w == 0) break;
        solve(h, w);
    }
    return 0;
}