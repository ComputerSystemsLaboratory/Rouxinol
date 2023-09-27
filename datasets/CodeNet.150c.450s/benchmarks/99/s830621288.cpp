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

string d = "ixcm";

int conv(string s) {
    s = "#" + s;
    int ret = 0;
    rep(k, 4) {
        rep(i, s.size()) {
            if (s[i] == d[k]) {
                ret += (isdigit(s[i - 1]) ? s[i - 1] - '0' : 1) * pow(10, k);
            }
        }
    }
    return ret;
}

string inv(int a) {
    string s = "";
    rep(k, 4) {
        if (a % 10 >= 1) {
            s += d[k];
        }
        if (a % 10 >= 2) {
            s += (a % 10) + '0';
        }
        a /= 10;
    }
    reverse(all(s));
    return s;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;
        cout << inv(conv(s) + conv(t)) << endl;
    }
}