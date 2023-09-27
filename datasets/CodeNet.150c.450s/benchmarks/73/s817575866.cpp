#include <bits/stdc++.h>
using namespace std;

typedef long long st_t;

st_t st[1 << 18];
// 1 << 18 = 262144

void init(int n, st_t* st){
    int nn = 1;
    while(nn < n) nn *= 2;
    fill(st, st + 2 * nn - 1, 0);
}

void add(int i, st_t a, int k, int l, int r, st_t* st){
    if(i < l || r <= i) return;
    if(r - l == 1) st[k] += a;
    else{
        int chl = 2 * k + 1;
        int chr = 2 * k + 2;
        add(i, a, chl, l, (l + r) / 2, st);
        add(i, a, chr, (l + r) / 2, r, st);
        st[k] = st[chl] + st[chr];
    }
}

st_t get_sum(int a, int b, int k, int l, int r, st_t* st){
    if(r <= a || b <= l) return 0;
    if(a <= l && r <= b) return st[k];
    st_t res_l = get_sum(a, b, 2 * k + 1, l, (l + r) / 2, st);
    st_t res_r = get_sum(a, b, 2 * k + 2, (l + r) / 2, r, st);
    return res_l + res_r;
}

int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    init(n, st);
    for(int _ = 0; _ < q; ++_){
        int c, x, y;
        scanf("%d%d%d", &c, &x, &y);
        if(c == 0){
            add(--x, y, 0, 0, n, st);
        }else{
            long long ret = get_sum(--x, --y + 1, 0, 0, n, st);
            printf("%lld\n", ret);
        }
    }
    
    return 0;
}