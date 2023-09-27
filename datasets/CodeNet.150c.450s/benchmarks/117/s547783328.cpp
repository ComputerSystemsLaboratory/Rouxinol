#include <bits/stdc++.h>

#define REP(i, s, n) for (int i = s; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

// data
int n;
const int MAX_N = 5e5;
int a[MAX_N];
int aux[MAX_N];
// int cmp_cnt = 0;

int merge_sort(int a[], int il, int ir);
int main(){
    cin >> n;
    rep(i, n) cin >> a[i];

    int cmp_cnt = merge_sort(a, 0, n);
    rep(i, n) cout << a[i] << (i<n-1?" ":"\n");
    cout << cmp_cnt << endl;
}

int merge(int *a, int l, int m, int r){
    int il = l, ir = m, cnt = 0;
    REP(i, l, r){

        if(il < m && a[il] < a[ir] || ir >= r) 
            aux[i] = a[il++];
        else
            aux[i] = a[ir++];
        
        cnt ++;
    }

    REP(i, l, r) a[i] = aux[i];
    return cnt;
}


int merge_sort(int a[], int il, int ir){
    if(ir - il<= 1) return 0;

    int mid = (il + ir) / 2;

    int cmp_cnt = 0;
    cmp_cnt += merge_sort(a, il, mid);
    cmp_cnt += merge_sort(a, mid, ir);
    cmp_cnt += merge(a, il, mid, ir);

    return cmp_cnt;
}

