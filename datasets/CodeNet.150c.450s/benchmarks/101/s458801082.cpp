#include<cstdio>

int par[100500];

int find(int x) {
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void unite(int x,int y) {
    x = find(x);
    y = find(y);
    par[x] = y;
}

void init() {
    for(int i=0; i<100500; i++)
        par[i] = i;
}

int main(void) {
    int n,m,q;
    scanf("%d%d",&n,&m);
    init();
    for(int i=0; i<m; i++) {
        int s,t;
        scanf("%d%d",&s,&t);
        unite(s,t);
    }
    scanf("%d",&q);
    for(int i=0; i<q; i++) {
        int s,t;
        scanf("%d%d",&s,&t);
        puts(find(s) == find(t) ? "yes" : "no");
    }
    return 0;
}