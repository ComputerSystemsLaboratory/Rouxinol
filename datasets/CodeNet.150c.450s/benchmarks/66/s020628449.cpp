#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

inline int tax(int p, int x) {
    return p * (100 + x) / 100;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    cin >> n;
    set<string> st;
    rep(i, n) {
        string s;
        cin >> s;
        st.insert(s);
    }
    int m;
    cin >> m;
    bool locked = true;
    rep(i, m) {
        string s;
        cin >> s;
        if (st.count(s)) {
            cout << (locked ? "Opened by " : "Closed by ") << s << endl;
            locked ^= 1;
        } else {
            cout << "Unknown " << s << endl;
        }
    }
}