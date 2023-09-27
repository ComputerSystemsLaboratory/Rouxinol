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
    int n,q;
    scanf("%d%d",&n,&q);
    init();
    for(int i=0; i<q; i++) {
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        if(c)
            puts(find(x)==find(y) ? "1" : "0");
        else
            unite(x,y);
    }
    return 0;
}