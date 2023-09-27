#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    queue< pair<string, int> > que;
    for (int i = 0; i < n; ++i) {
        string s; int t;
        cin >> s >> t;
        que.push(make_pair(s, t));
    }
    int sum = 0;
    while (que.size()) {
        pair<string, int> s = que.front(); que.pop();
        sum += min(q, s.second);
        s.second -= q;
        if (s.second > 0) que.push(s);
        else cout << s.first << ' ' << sum << endl;
    }
}