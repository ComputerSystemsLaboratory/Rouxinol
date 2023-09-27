#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr << #x << ": " << x << endl;

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const int    inf = 100100100;
const int    MOD = (int)1e9 + 7;
const double EPS = 1e-9;


int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    rep(loop_count, n) {
        string s[2];
        cin >> s[0] >> s[1];
        int a[2] = {};
        rep(k, 2) {
            int t = 1;
            rep(i, s[k].size()) {
                if ('2' <= s[k][i] && s[k][i] <= '9') {
                    t = s[k][i] - '0';
                } else {
                    switch (s[k][i]) {
                    case 'm':
                        a[k] += t * 1000;
                        break;
                    case 'c':
                        a[k] += t * 100;
                        break;
                    case 'x':
                        a[k] += t * 10;
                        break;
                    case 'i':
                        a[k] += t;
                        break;
                    }
                    t = 1;
                }
            }
        }
        int    ans = a[0] + a[1];
        string ans_s = "";
        int    kiridasi = 1000;
        while (true) {
            int tmp = ans / kiridasi;
            if (tmp % 10 > 1) {
                if (kiridasi == 1000)
                    cout << tmp % 10 << "m";
                else if (kiridasi == 100)
                    cout << tmp % 10 << "c";
                else if (kiridasi == 10)
                    cout << tmp % 10 << "x";
                else if (kiridasi == 1)
                    cout << tmp % 10 << "i";
            } else if (tmp % 10 == 1) {
                if (kiridasi == 1000)
                    cout << "m";
                else if (kiridasi == 100)
                    cout << "c";
                else if (kiridasi == 10)
                    cout << "x";
                else if (kiridasi == 1)
                    cout << "i";
            }
            kiridasi /= 10;
            if (kiridasi <= 0) break;
        }
        cout << endl;
    }
    return 0;
}

