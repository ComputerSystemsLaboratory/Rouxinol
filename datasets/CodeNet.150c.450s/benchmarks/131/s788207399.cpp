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

int calc(int x, int n) {
    string s = to_string(x);
    while (s.size() < n) {
        s += "0";
    }
    sort(all(s));
    int b = stoi(s);
    reverse(all(s));
    int a = stoi(s);

    return a - b;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int x, n;
    while (cin >> x >> n, n) {
        set<int> st;
        vector<int> v;
        int i;
        for (i = 0; st.count(x) == 0; i++) {
            st.insert(x);
            v.emplace_back(x);
            x = calc(x, n);
        }
        int j;
        for (j = 0; v[j] != x; j++)
            ;
        cout << j << " " << x << " " << i - j << endl;
    }
}