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
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;
        int n = s.size();
        set<string> st;
        for (int i = 1; i <= n - 1; i++) {
            string t = s.substr(0, i);
            string u = s.substr(i);
            rep(j, 2) {
                rep(k, 2) {
                    rep(l, 2) {
                        st.insert(t + u);
                        swap(t, u);
                    }
                    reverse(all(u));
                }
                reverse(all(t));
            }
        }
        cout << st.size() << endl;
    }
}