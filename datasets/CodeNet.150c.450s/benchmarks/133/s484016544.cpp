#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int d, day = 1;
vector<int> c(26), t, last(26, -1);
vector<vector<int>> s;
int score;

void input() {
    cin >> d;
    t = vector<int>(d);
    s = vector<vector<int>>(d, vector<int>(26));

    for (int& i : c) cin >> i;
    for (auto& v : s)
        for (int& i : v) cin >> i;
    for (int& i : t) cin >> i, --i;
}

int f(int contest) {
    int k = 0;
    for (int i = 0; i < 26; ++i) {
        if (i == contest) k += s[day][i], last[i] = day;
        k -= c[i] * (day - last[i]);
    }
    return k;
}

int main() {
    input();
    for (day = 0; day < d; ++day) { cout << (score += f(t[day])) << endl; }
}