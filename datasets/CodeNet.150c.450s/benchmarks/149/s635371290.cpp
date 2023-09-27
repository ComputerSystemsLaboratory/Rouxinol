#include <bits/stdc++.h>

int par[100010];
int find(int x) {
    return par[x] < 0 ? x : par[x] = find(par[x]);
}
void union_(int x, int y) {
    if ((x = find(x)) != (y = find(y))) par[y] = x;
}
void init() {
    memset(par, -1, sizeof par);
}

int main(void) {
    int n,q;
    scanf("%d%d",&n,&q);
    init();
    for(int i=0; i<q; i++) {
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        if(c)
            puts(find(x)==find(y) ? "1" : "0");
        else
            union_(x,y);
    }
    return 0;
}