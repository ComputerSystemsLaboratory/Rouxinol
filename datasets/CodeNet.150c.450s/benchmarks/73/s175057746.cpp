#include<cstdio>
#define M 0

int seg[500000];

int min(int x, int y) {
    return (x < y ? x : y);
}

void init(void) {
    for(int i=0; i<500000; i++)
        seg[i] = M;
}

void update(int i) {
    seg[i] = seg[2*i+1] + seg[2*i+2];
    if(i) update((i-1)/2);
}

int find(int x, int y, int l, int r, int i) {
    if(r<x || y<l) return 0;
    if(x<=l && r<=y) return seg[i];
    return find(x,y,l,(l+r)/2,i*2+1) + find(x,y,(l+r)/2+1,r,i*2+2);
}


int main(void) {
    int n,q;
    scanf("%d%d",&n,&q);
    init();
    for(int i=0; i<q; i++) {
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        if(c) {
            printf("%d\n", find(x,y,0,(1<<18)-1,0));
        } else {
            seg[x+(1<<18)-1] += y;
            update((x+(1<<18)-1-1)/2);
        }
    }
}