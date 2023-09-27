#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
using ll = long long;

struct P {
    static constexpr int N = 60;
    P() {
        for (int i = 0; i < N; i++) {
            p[i] = 0;
        }
    }
    void append(ll a) {
        for (int i = N - 1; i >= 0; i--) {
            ll m = 1LL << i;
            if (a & m) {
                if (p[i]) {
                    a ^= p[i];
                    if (a == 0) break;
                    continue;
                } else {
                    p[i] = a;
                    break;
                }
            }
        }
    }
    bool query(ll a) {
        for (int i = N - 1; i >= 0; i--) {
            ll m = 1LL << i;
            if (a & m) a ^= p[i];
        }
        return a != 0;
    }
    void print() {
        cout << '@';
        for (int i = N - 1; i >= 0; i--) {
            if (p[i]) {
                cout << p[i] << ' ';
            }
        }
        cout << '\n';
    }
    ll p[N];
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        P p;

        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;

        int r = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                p.append(a[i]);
            } else {
                if (p.query(a[i])) {
                    r = 1;
                    break;
                }
            }
        }

        cout << r << '\n';
    }

    //最後が人1なら人1の勝ち 最後が人0のときを考える
    //何回でも使えるとしていいんか
    //人1は組み合わせる必要がない 単体で出してダメなものを合わせてもダメ
    //人1はそれよりあとの人0が対処できないものを出せれば勝ち それ以外に勝ちがあるか？
    //
    //最初の人0は何かする意味なさそう

    return 0;
}