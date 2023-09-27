#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

ll merge(vll& a, const int left, const int mid, const int right) {
    int n1 = mid - left, n2 = right - mid;

    vll l(n1 + 1), r(n2 + 1);
    rep(i, 0, n1) { l[i] = a[i + left]; }
    rep(i, 0, n2) { r[i] = a[i + mid]; }
    l[n1] = r[n2] = 1000000000;

    ll sum = 0;
    int i = 0, j = 0;
    rep(k, left, right) {
        if (l[i] <= r[j]) {
            a[k] = l[i++];
        }
        else {
            a[k] = r[j++];
            sum += n1 - i;
        }
    }
    return sum;
}

ll calc_inversion_num(vll& a, const int left, const int right) {
    ll sum = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        sum += calc_inversion_num(a, left, mid);
        sum += calc_inversion_num(a, mid, right);
        sum += merge(a, left, mid, right);
    }
    return sum;
}


int main() {
    int n;
    cin >> n;

    vll A(n);
    rep(i, 0, n) { cin >> A[i]; }

    ll ans = calc_inversion_num(A, 0, n);

    cout << ans << endl;

    return 0;
}
