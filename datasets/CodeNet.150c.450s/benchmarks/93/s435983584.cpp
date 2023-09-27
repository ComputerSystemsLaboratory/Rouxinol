#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;
using P   = pair<int, int>;

template <class T>
bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    } else {
        return false;
    }
}
template <class T>
bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    } else {
        return false;
    }
}

template <class T>
void dump_vec(const vector<T> &v) {
    auto len = v.size();
    rep(i, 0, len) {
        cout << v[i] << (i == (int)len - 1 ? "\n" : " ");
    }
}

struct Setup {
    Setup() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} SETUP;

//---------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------

// 配列 A[p..r] を A[p..q − 1] の各要素が A[q] 以下で、
// A[q + 1.. r] の各要素が A[q] より大きい A[p..q − 1] と A[q + 1..r] に分割し、インデックス q を戻り値として返す
template <class T>
int partition(vector<T> &as, int p, int r) {
    auto x = as[r];
    int i  = p - 1;
    rep(j, p, r) {
        if (as[j] <= x) {
            i++;
            swap(as[i], as[j]);
        }
    }
    swap(as[i + 1], as[r]);
    return i + 1;
}

template <class T>
void qsort(vector<T> &as, int p, int r) {
    if (p >= r) return;

    int q = partition(as, p, r);
    qsort(as, p, q - 1);
    qsort(as, q, r);
}

struct Card {
    string suit;
    int num;
    int idx;

    Card() : suit(""), num(-1), idx(-1) {}
    Card(string s, int n, int i) : suit(s), num(n), idx(i) {}
    bool operator<(const Card &r) const {
        return num < r.num;
    }
    bool operator<=(const Card &r) const {
        return num <= r.num;
    }
    bool operator==(const Card &r) const {
        return num == r.num;
    }
    bool operator!=(const Card &r) const {
        return num != r.num;
    }
};

bool is_stable(const vector<Card> &sorted) {
    const auto len = sorted.size();
    bool ok        = true;
    rep(i, 0, len - 1) {
        if (sorted[i].num == sorted[i + 1].num && sorted[i].idx > sorted[i + 1].idx) {
            ok = false;
        }
    }
    return ok;
}

signed main() {
    int N;
    cin >> N;
    vector<Card> A(N);
    rep(i, 0, N) {
        string s;
        cin >> s;
        int n;
        cin >> n;
        A[i] = Card(s, n, i);
    }
    qsort(A, 0, N - 1);

    cout << (is_stable(A) ? "Stable\n" : "Not stable\n");
    for (const auto &c : A) {
        cout << c.suit << " " << c.num << "\n";
    }
}

