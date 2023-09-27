#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define int long long

using namespace std;

int merge(int a[], int l, int m, int r){
    int n1 = m - l, n2 = r - m;
    int L[n1+1], R[n2+1];
    rep(i, 0, n1) L[i] = a[l + i];
    rep(i, 0, n2) R[i] = a[m + i];
    L[n1] = LLONG_MAX;
    R[n2] = LLONG_MAX;
    int i = 0, j = 0;
    int cnt = 0;
    rep(k, l, r){
        if(L[i] <= R[j]) a[k] = L[i++];
        else {
            a[k] = R[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

int merge_sort(int a[], int l, int r){
    int cnt = 0;
    if(l + 1 < r){
        int m = (l + r)/2;
        cnt += merge_sort(a, l, m);
        cnt += merge_sort(a, m, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
}

signed main(){
    int n; cin >> n;
    int a[n]; rep(i, 0, n) scanf("%ld", &a[i]);

    cout << merge_sort(a, 0, n) << endl;
    return 0;
}
