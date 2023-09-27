#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN=10005;
int tab[MAXN];

int count(int *S, int m, int n){
    int p[n+1];
    int INF=1000000000;
    for(int i=0;i<=n;i++)
        p[i]=INF;
    p[0]=0;
    for(int i=0;i<m;i++)
        for(int j=S[i];j<=n;j++)
            p[j]=min(p[j],1+p[j-S[i]]);
    return p[n];
}

int main(){
    int n,m,t;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
        scanf("%d",&tab[i]);
    printf("%d\n",count(tab,m,n));
}