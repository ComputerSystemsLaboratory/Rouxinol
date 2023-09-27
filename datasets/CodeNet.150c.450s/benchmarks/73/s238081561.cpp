#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX_N = 100001;

ll st[1 << 18];

void init(int n){
    int nn = 1;
    while(nn < n) nn *= 2;
    fill(st, st + 2 * nn - 1, 0);
}

void add(int i, ll x, int k, int l, int r){
    if(i < l || r <= i) return;
    if(r - l == 1) st[k] += x;
    else{
        int chl = 2 * k + 1;
        int chr = 2 * k + 2;
        add(i, x, chl, l, (l + r) / 2);
        add(i, x, chr, (l + r) / 2, r);
        st[k] = st[chl] + st[chr];
    }
}

ll get_sum(int a, int b, int k, int l, int r){
    if(r <= a || b <= l) return 0LL;
    if(a <= l && r <= b) return st[k];
    ll res_l = get_sum(a, b, 2 * k + 1, l, (l + r) / 2);
    ll res_r = get_sum(a, b, 2 * k + 2, (l + r) / 2, r);
    return res_l + res_r;
}

int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    init(++n);
    for(int _ = 0; _ < q; ++_){
        int c, x, y;
        scanf("%d%d%d", &c, &x, &y);
        if(c == 0){
            add(x, y, 0, 0, n);
        }else{
            ll ret = get_sum(x, y + 1, 0, 0, n);
            printf("%lld\n", ret);
        }
    } 
    return 0;
}