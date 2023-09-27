#include <bits/stdc++.h>

#define REP(i, s, n) for (int i = s; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

// data
int n;
const int MAX_N = 5e5;
int a[MAX_N];
int aux[MAX_N];

int64_t merge_sort(int a[], int il, int ir);
int main()
{
    cin >> n;
    rep(i, n) cin >> a[i];

    int64_t inv_cnt = merge_sort(a, 0, n);
    cout << inv_cnt << endl;
}

int64_t merge(int *a, int l, int m, int r)
{
    int il = l, ir = m;
    int64_t cnt = 0;
    REP(i, l, r)
    {
        if (il < m && a[il] < a[ir] || ir >= r)
            aux[i] = a[il++];
        else{
            aux[i] = a[ir++];
            cnt += m - il;
        }

    }

    REP(i, l, r) a[i] = aux[i];
    return cnt;
}

int64_t merge_sort(int a[], int il, int ir)
{
    if (ir - il <= 1)
        return 0;

    int mid = (il + ir) / 2;

    int64_t inv_cnt = 0;
    inv_cnt += merge_sort(a, il, mid);
    inv_cnt += merge_sort(a, mid, ir);
    inv_cnt += merge(a, il, mid, ir);

    return inv_cnt;
}

