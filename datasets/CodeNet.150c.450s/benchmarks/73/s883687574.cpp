#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> v, t;

int combine(int i, int j) {
    return i + j;
}

void build(int id = 1, int l = 0, int r = N) {
    if (r - l < 2) {
        t[id] = v[l];
        return;
    }

    int mid = (l + r) / 2;
    build(id<<1  , l, mid);
    build(id<<1|1, mid, r);
    t[id] = combine(t[id<<1], t[id<<1|1]);
}

void modify(int p, int val, int id = 1, int l = 0, int r = N) {     // set v[p] = val
    if (r - l < 2) {
        t[id] += val;
        return;
    }

    int mid = (l + r) / 2;
    if (p < mid)
        modify(p, val, id<<1  , l, mid);
    else
        modify(p, val, id<<1|1, mid, r);
    
    t[id] = combine(t[id<<1], t[id<<1|1]);
}

int query(int x, int y, int id = 1, int l = 0, int r = N) {         // query in range [l,r)
    if (x >= r || l >= y) return 0;
    if (x <= l && r <= y) return t[id];

    int mid = (l + r) / 2;
    return combine(query(x,y,id<<1,l,mid), query(x,y,id<<1|1,mid,r));
}

int main() {

    scanf("%d%d",&N,&Q); t.assign(N<<2,0);
    for (int i = 0, op, x, y; i < Q; i++) {
        scanf("%d%d%d",&op,&x,&y);

        if (op) 
            printf("%d\n", query(x-1,y));
        else 
            modify(x-1,y);
            
    }

    return 0;
}