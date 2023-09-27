#include <stdio.h>
#include <stdlib.h>
#define MAX 101
#define rep(i,n) for(int i=0;i<n;i++)
#define infinity 1e9
typedef struct tuple{
    int a;
    int b;
    int w;
}tuple;
int n,t=0,cost=0;
int G[MAX][MAX],tags[MAX];
tuple v[5010];
int cmpAscW(const void * n1, const void * n2){
    if (((tuple *)n1)->w > ((tuple *)n2)->w)return 1;
	else if (((tuple *)n1)->w < ((tuple *)n2)->w)return -1;
	else return 0;
}
int min(int x,int y){
    if(x < y)return x;
    else return y;
}
int max(int x,int y){
    if(x<y)return y;
    else return x;
}
void Kruskal(){
    int m,temp=0;
    rep(i,t){
        if(tags[v[i].a] != tags[v[i].b]){
            temp = max(tags[v[i].a],tags[v[i].b]);
            m = min(tags[v[i].a],tags[v[i].b]);
            tags[v[i].a] = m;
            tags[v[i].b] = m;
            cost += v[i].w;
            for(int j=m;j<n;j++){
                if(tags[j] == temp)tags[j]=m;
            }
        }
    }
}
int main(){
    scanf("%d",&n);
    rep(i,5010){
        v[i].w = infinity;
    }
    rep(i,n){
        tags[i] = i;
        rep(j,n){
            scanf("%d",&G[i][j]);
            if(i<j){
                if(G[i][j] != -1){
                    v[t].a = i;
                    v[t].b = j;
                    v[t].w = G[i][j];
                    t++;
                }
            }
        }
    }
    qsort(v, t, sizeof(tuple), cmpAscW);
    Kruskal();
    printf("%d\n",cost);
    return 0;
}
