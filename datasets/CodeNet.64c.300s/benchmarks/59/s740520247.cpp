#include<cstdio>
#include<cstring>

typedef long long int lli;

char prime[50000002];

int main(void) {
//    memset(prime, 0xFF, sizeof(prime));
    prime[0] = 1;
    for(lli i=3; i<100000002; i+=2)
        if(!prime[i/2])
            for(lli j=3; i*j<100000002; j+=2)
                prime[i*j/2] = 1;

    int n;
    scanf("%d",&n);
    int res=0;
    for(int i=0; i<n; i++) {
        int a;
        scanf("%d",&a);
        if(!(a%2) && a-2) continue;
        if(!prime[a/2]) res++;
    }
    printf("%d\n",res);
    return 0;
}