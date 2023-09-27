#include <cstdio>

#define N 1000

typedef long long int lli;

lli a[N*N];
lli b[N*N];
lli c[N*N];

int n,m,l;

void mult() {
    for(int i=0; i<n; i++)
        for(int j=0; j<l; j++)
            for(int k=0; k<m; k++)
                c[i*N + j] += a[i*N + k] * b[k*N + j];
}

int main(void) {
    scanf("%d%d%d",&n,&m,&l);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%lld", &a[i*N + j]);
    for(int i=0; i<m; i++)
        for(int j=0; j<l; j++)
            scanf("%lld", &b[i*N + j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<l; j++)
            c[i*N + j] = 0;

    mult();

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<l-1; j++)
            printf("%lld ", c[i*N + j]);
        printf("%lld", c[i*N + l-1]);
        printf("\n");
    }
    return 0;
}