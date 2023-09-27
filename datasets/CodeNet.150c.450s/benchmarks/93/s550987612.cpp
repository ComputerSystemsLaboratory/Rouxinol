#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using Card = pair<char, ll>;

void merge(vector<Card>& A, const int left, const int mid, const int right) {
    int n1 = mid - left, n2 = right - mid;

    vector<Card> l(n1 + 1), r(n2 + 1);
    rep(i, 0, n1) { l[i] = A[i + left]; }
    rep(i, 0, n2) { r[i] = A[i + mid]; }

    l[n1].second = 1000000000;
    r[n2].second = 1000000000;

    int i = 0, j = 0;
    rep(k, left, right) {
        if(l[i].second <= r[j].second) {
            A[k] = l[i++];
        } else {
            A[k] = r[j++];
        }
    }
}

void merge_sort(vector<Card>& A, const int left, const int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);  // O(n1 + n2)
    }
}

int partition(vector<Card>& A, const int p, const int r) {
    ll x = A[r].second;
    int i = p - 1;

    rep(j, p, r) {
        if (A[j].second <= x) {
            ++i;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quick_sort(vector<Card>& A, const int p, const int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }
}

int main() {
    int n;
    cin >> n;

    vector<Card> A(n), B(n);
    rep(i, 0, n) {
        char c;
        ll d;
        cin >> c >> d;
        A[i] = make_pair(c, d);
        B[i] = make_pair(c, d);
    }

    quick_sort(A, 0, n - 1);
    merge_sort(B, 0, n);

    bool stable = true;
    rep(i, 0, n) {
        if (A[i].first != B[i].first) {
            stable = false;
            break;
        }
    }

    cout << (stable ? "Stable" : "Not stable") << endl;
    rep(i, 0, n) {
        cout << A[i].first << " " << A[i].second << endl;
    }
    return 0;
}
