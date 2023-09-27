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
bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    } else {
        return false;
    }
}
template <class T>
bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    } else {
        return false;
    }
}

template <class T>
void dump_vec(const vector<T>& v) {
    auto len = v.size();
    rep(i, 0, len) {
        cout << v[i] << (i == (int)len - 1 ? "\n" : " ");
    }
}

struct FastIO {
    FastIO() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} FASTIO;

//---------------------------------------------------------------------------------------------------

struct Node {
    int v, l, r;
    Node() {}
    Node(int v, int l, int r) : v(v), l(l), r(r) {}
};

//---------------------------------------------------------------------------------------------------

vector<int> pars;
vector<Node> tree;

void preoder(int p) {
    // dfs
    if (p < 0) {
        return;
    }
    cout << " " << p;
    auto n = tree[p];
    preoder(n.l);
    preoder(n.r);
}

void inorder(int p) {
    if (p < 0) {
        return;
    }
    // 左
    auto n = tree[p];
    inorder(n.l);
    // 自身
    cout << " " << p;
    // 右
    inorder(n.r);
}

void postorder(int p) {
    if (p < 0) {
        return;
    }
    // 左、右
    auto n = tree[p];
    postorder(n.l);
    postorder(n.r);
    // 自身
    cout << " " << p;
}

signed main() {
    int N;
    cin >> N;
    tree.resize(N);
    pars.resize(N, -1);
    rep(i, 0, N) {
        int p, l, r;
        cin >> p >> l >> r;
        Node node(p, l, r);
        tree[p] = node;
        if (l >= 0) {
            pars[l] = p;
        }
        if (r >= 0) {
            pars[r] = p;
        }
    }

    int root = -1;
    rep(i, 0, N) {
        if (pars[i] == -1) root = i;
    }

    cout << "Preorder\n";
    preoder(root);
    cout << "\n";

    cout << "Inorder\n";
    inorder(root);
    cout << "\n";

    cout << "Postorder\n";
    postorder(root);
    cout << "\n";
}

