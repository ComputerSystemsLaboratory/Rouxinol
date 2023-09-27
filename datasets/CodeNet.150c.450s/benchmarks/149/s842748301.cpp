#include <algorithm>

int uf[100010];
void init(int n){ for(int i = 0; i < n; i++) uf[i] = -1; }
int find(int x){
    if(uf[x] < 0) return x;
    return uf[x] = find(uf[x]);
}
void unite(int x, int y){
    x = find(x); y = find(y);
    if(x != y){ uf[x] += uf[y]; uf[y] = x; }
}
bool same(int x, int y){
    return find(x) == find(y);
}

#include <cstdio>

int main(){
    int n,q;
    scanf("%d%d",&n,&q);
    init(n);
    while(q--){
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        if(c){
            printf("%d\n",same(x,y));
        } else {
            unite(x,y);
        }
    }
}