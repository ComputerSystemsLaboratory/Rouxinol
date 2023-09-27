#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ull = uint64_t;

void print() { cout << endl; }
template <typename Head, typename... Tail>
void print(Head head, Tail... tail) {
    int size = sizeof...(Tail);
    cout << head;
    if (size > 0) {
        cout << " ";
    }
    print(tail...);
}

void print0() {}
template <typename Head, typename... Tail>
void print0(Head head, Tail... tail) {
    cout << head;
    print0(tail...);
}

struct xstruct {
    ll val;
};
bool operator<=(const xstruct& lhs, const xstruct& rhs) {
    return lhs.val <= rhs.val;
}
bool operator<(const xstruct& lhs, const xstruct& rhs) {
    return lhs.val < rhs.val;
}
bool operator>=(const xstruct& lhs, const xstruct& rhs) {
    return lhs.val >= rhs.val;
}
bool operator>(const xstruct& lhs, const xstruct& rhs) {
    return lhs.val > rhs.val;
}
bool operator==(const xstruct& lhs, const xstruct& rhs) {
    return lhs.val == rhs.val;
}
bool operator!=(const xstruct& lhs, const xstruct& rhs) {
    return lhs.val != rhs.val;
}
ostream& operator<<(ostream& os, xstruct const& xst) {
    return os << xst.val;
}

int main() {
    string sa, sb;
    getline(cin, sa);
    getline(cin, sb);

    ll la = sa.length();
    ll lb = sb.length();

    // edit_distance
    vector<vector<ll>> edit_distance(la + 1, vector<ll>(lb + 1));
    for (ll a = 0; a <= la; a++) {
        for (ll b = 0; b <= lb; b++) {
            edit_distance[a][b] = -1;
        }
    }
    for (ll a = 0; a <= la; a++) {
        edit_distance[a][0] = a;
    }
    for (ll b = 0; b <= lb; b++) {
        edit_distance[0][b] = b;
    }
    for (ll a = 1; a <= la; a++) {
        for (ll b = 1; b <= lb; b++) {
            ll minval = la + lb;
            if (sa.at(a - 1) == sb.at(b - 1)) {
                minval = min(minval, edit_distance[a - 1][b - 1]);  // same
            }
            minval = min(minval, 1 + edit_distance[a - 1][b - 1]);  // replace
            minval = min(minval, 1 + edit_distance[a - 1][b]);      // insert
            minval = min(minval, 1 + edit_distance[a][b - 1]);      // delete
            edit_distance[a][b] = minval;
        }
    }

    print(edit_distance[la][lb]);
}

