#include<cstdio>

int pa[10000];

int find(int x){

    if(pa[x]!=x) pa[x] = find(pa[x]);
    return pa[x];
}

void Init(int n){

    for(int i=0;i<n;i++) pa[i] = i;
    return ;
}

int Query(int a,int b){

    if(find(a)!=find(b)) return 0;
    return 1;
}

void Union(int a,int b){

    int x = find(a);
    int y = find(b);

    if(x!=y) pa[x] = y;
}

int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m)){

        Init(n);

        while(m--){

            int op;
            int x,y;

            scanf("%d%d%d",&op,&x,&y);

            if(op==1) printf("%d\n",Query(x,y));
            else Union(x,y);
        }
    }
    return 0;
}