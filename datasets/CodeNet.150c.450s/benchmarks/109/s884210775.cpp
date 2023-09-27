#include <bits/stdc++.h>
using namespace std;
using Pair = pair<int, int>;

enum { END, START };

int time(string str) {
    int h = stoi(str.substr(0, 2));
    int m = stoi(str.substr(3, 2));
    int s = stoi(str.substr(6, 2));
    return 3600 * h + 60 * m + s;
}

void solve(int N) {
    priority_queue<Pair, vector<Pair>, greater<Pair>> que;
    for(int i = 0; i < N; ++i) {
        string s, e;
        cin >> s >> e;
        que.emplace(time(s), START);
        que.emplace(time(e), END);
    }
    int now = 0, ans = 0;
    while(!que.empty()) {
        auto t = que.top(); que.pop();
        if(t.second == START) now++;
        else now--;
        ans = max(ans, now);
    }
    cout << ans << '\n';
}

int main() {
    int N;
    while(cin >> N) {
        if(!N) break;
        solve(N);
    }
    return 0;
}

