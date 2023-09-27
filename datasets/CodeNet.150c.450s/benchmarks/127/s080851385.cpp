#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void insert(set<string> &st, string s1, string s2) {
    st.insert(s1 + s2);
    reverse(all(s1));
    st.insert(s1 + s2);
    reverse(all(s2));
    st.insert(s1 + s2);
    reverse(all(s1));
    st.insert(s1 + s2);
}

int main() {
    int m;
    cin >> m;
    rep(i, m) {
        set<string> st;
        string s;
        cin >> s;
        rep(j, s.size()) if (j) {
            auto s1 = s.substr(0, j);
            auto s2 = s.substr(j, s.size() - j);
            insert(st, s1, s2);
            insert(st, s2, s1);
        }
        cout << st.size() << endl;
    }
    return 0;
}