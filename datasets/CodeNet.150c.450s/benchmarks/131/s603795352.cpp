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
    vector<int> digits;
    while (x > 0 || digits.size() < n) {
        digits.emplace_back(x % 10);
        x /= 10;
    }

    sort(all(digits));
    reverse(all(digits));
    int a = 0;
    for (auto d : digits) {
        a *= 10;
        a += d;
    }
    reverse(all(digits));
    int b = 0;
    for (auto d : digits) {
        b *= 10;
        b += d;
    }

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