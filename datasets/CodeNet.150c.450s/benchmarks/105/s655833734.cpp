/*
verified on 2020/6/13
https://atcoder.jp/contests/agc045/submissions/14201952
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using ll = long long;

using namespace std;

/* snippet starts */

// xorの掃き出し法をするためのクラス
// matに基底たちが入る
// Tはbitsetは無理(minしないといけないから)
template <typename T>
class BitLinearSpace {
    vector<T> bases; // この中身をsortしちゃうと壊れる

public:
    BitLinearSpace() = default;
    BitLinearSpace(vector<T> &matrix) {
        for (auto &mi:matrix) {
            add_val(mi, false);
        }
    }

    // valが張れるように基底を追加する
    // 追加した場合true, しなかった場合false
    // O(N) (ソートするとNlogN)
    // 追加後にソートするかを選ぶ
    bool add_val(T val) {
        if ((val = elementary_opperation(val))) {
            bases.push_back(val);
            return true;
        } else {
            return false;
        }
    }

    // 今のベクトル空間にvalが含まれるか(=basesの要素のxorでvalが作れるかをチェック)
    // O(n)
    bool includes(T val) {
        return elementary_opperation(val) == 0;
    }

    // 行列にvalを追加するていで行基本変形をvalに施す
    // 実際には追加しない
    // O(n)
    T elementary_opperation(T val) {
        for (auto &b:bases) {
            val = min(val, val ^ b);
        }
        return val;
    }

    T &operator[](int i) { return bases[(size_t)i]; }
    const T &operator[](int i) const { return bases[(size_t)i]; }

    auto begin() { return bases.begin(); }
    auto end() { return bases.end(); }
    auto begin() const { return bases.begin(); }
    auto end() const { return bases.end(); }
};

/* snippet ends */

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n; cin >> n;
        ll a[n]; for (auto &ai:a) cin >> ai;
        string s; cin >> s;
        bool ans = false;
        BitLinearSpace<ll> bls;
        for (int i=n-1; i>=0; i--) {
            if (s[(size_t)i] - '0') {
                if (!bls.includes(a[i])) {
                    ans = true;
                    break;
                }
            } else {
                bls.add_val(a[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}