#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>

void numbering(int id, int *g, int num, std::vector<int> *a){
    int tmp;
    for(int i=0;i<a[id].size();i++){
        tmp = a[id][i];
        if(g[tmp])continue;
        g[tmp] = num;
        numbering(tmp, g, num, a);
    }
}

void grouping(std::vector<int> *a, int *g, int n){
    int num = 1;
    for(int i=0;i<n;i++){
        if(g[i])continue;
        g[i] = num;
        numbering(i,g,num,a);
        num++;
    }
}

int main(){
    int i, n, m, q, s, t;
    int *g;
    scanf("%d %d",&n,&m);
    g = (int *)malloc(sizeof(int)*n);
    memset(g, 0, sizeof(int)*n);
    std::vector<int> a[n];
    for(i=0;i<m;i++){
        scanf("%d %d",&s,&t);
        a[s].push_back(t);
        a[t].push_back(s);
    }
    scanf("%d",&q);
    grouping(a,g,n);
    for(i=0;i<q;i++){
        scanf("%d %d",&s,&t);
        if(g[s]==g[t])printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

