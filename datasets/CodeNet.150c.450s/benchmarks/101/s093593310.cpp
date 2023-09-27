#include <iostream>

using namespace std;

int user[100000];

void init(int n) {
    fill_n(user, n, -1);
}

int root(int s) {
    if (user[s] < 0)
        return s;
    else
        return user[s] = root(user[s]);
}

void unite(int s, int t) {
    int rs = root(s);
    int rt = root(t);
    if (rs != rt) {
        if (user[rs] < user[rt])
            swap(rs, rt);
        user[rs] += user[rt];
        user[rt] = rs;
    }
}

bool same(int s, int t) {
    return root(s) == root(t);
}

int main() {
    int n, m, q, s, t, c = 1;
    cin >> n >> m;
    init(n);
    for (int i = 0; i < m; ++i) {
        cin >> s >> t;
        unite(s, t);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> s >> t;
        if (same(s, t))
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }

    return 0;
}
