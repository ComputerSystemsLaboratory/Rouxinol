#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

ll originalMerge(vector<int> &as, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> l(n1 + 1), r(n2 + 1);

    int i, j;
    ll cnt;
    rep(i, n1) l[i] = as[left + i];
    rep(i, n2) r[i] = as[mid + i];
    l[n1] = INT_MAX;
    r[n2] = INT_MAX;
    i = 0; j = 0; cnt = 0;
    for (int k = left; k < right; ++k) {
        if (l[i] <= r[j]) {
            as[k] = l[i];
            i++;
        }
        else {
            as[k] = r[j];
            j++;
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll mergeSort(vector<int> &as, int left, int right) {
    ll cnt = 0;
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        cnt += mergeSort(as, left, mid);
        cnt += mergeSort(as, mid, right);
        cnt += originalMerge(as, left, mid, right);
    }
    return cnt;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<int> as(n);
    rep(i, n) cin>>as[i];

    ll cnt = mergeSort(as, 0, n);
    cout<<cnt<<endl;
}
