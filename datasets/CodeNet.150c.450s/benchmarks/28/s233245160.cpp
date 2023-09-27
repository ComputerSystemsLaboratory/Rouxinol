#include<cstdio>

int w[200000];
int n,k;

bool can(long long int x) {
    long long int load=0,count=1;
    for(int i=0; i<n; i++) {
        if(w[i]>x)
            return false;
        if(load+w[i]<=x)
            load+=w[i];
        else
            count++, load=w[i];
    }
    return count <= k;
}

int main(void) {
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++)
        scanf("%d",&w[i]);

    long long int a=0, b=10000000000;
    while(b-a>1) {
        long long int m=(a+b)/2;
        if(can(m))
            b=m;
        else
            a=m;
    }
    printf("%lld\n", b);
    return 0;
}