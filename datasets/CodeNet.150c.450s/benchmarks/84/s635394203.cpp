#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define ALL(a) a.begin(), a.end()
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1e14;
const ll MOD = 1e9 + 7;

const ll MAX = 2e5;

ll L[MAX / 2 + 2], R[MAX / 2 + 2];

ll merge(vector<ll> &A, ll left, ll mid, ll right)
{
    ll i, j;
    ll cnt = 0;
    ll n1 = mid - left;
    ll n2 = right - mid;
    for (i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (i = 0; i <= n2; i++) {
        R[i] = A[mid + i];
    }
    L[n1] = R[n2] = INF;
    i = j = 0;
    for (ll k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll mergeSort(vector<ll> &A, ll left, ll right)
{
    ll mid;
    ll v1, v2, v3;
    if (left + 1 < right) {
        mid = (left + right) / 2;
        v1 = mergeSort(A, left, mid);
        v2 = mergeSort(A, mid, right);
        v3 = merge(A, left, mid, right);
        return v1 + v2 + v3;
    } else {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) { cin >> a[i]; }

    ll ans = mergeSort(a, 0, n);
    cout << ans << endl;
    return 0;
}
