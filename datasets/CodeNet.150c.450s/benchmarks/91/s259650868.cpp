#include <cstdio>
#include <cstring>
#define MAXN 1000010
bool is_prime[MAXN];
int prime[MAXN];

void find(int n) {
    memset(is_prime,1,sizeof(is_prime));
    is_prime[0]=is_prime[1]=false;
    prime[0]=0;
    for(int i=2;i<=n;i++) {
        if(is_prime[i]) {
            prime[++prime[0]]=i;
            for(int j=2*i;j<=n;j+=i) is_prime[j]=false;

        }
    }
}


int bifind(int n) {
    int b=1,e=prime[0],mid;
    while(b<=e) {
        mid=(b+e)>>1;
        if(n==prime[mid]) return mid;
        //printf("%d %d %d\n",b,mid,e);
        else if(n>prime[mid]) {b=mid+1;}
        else {e=mid-1;}
    }
    return b-1;
}
int main() {
    int n;
    find(999999);
    //printf("%d\n",prime[0]);
    //printa(prime,prime[0]);
    while(scanf("%d",&n)!=EOF) {
         int pos=bifind(n);
         printf("%d\n",pos);
    }
}