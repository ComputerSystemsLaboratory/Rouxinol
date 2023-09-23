#include <stdio.h>
#define mx(a,b) (a<b?b:a)
int main() {long long i,j,k,n,f;while (scanf("%lld",&n)!=EOF && n) {j=i=0,f=-5000000007;while (n--) {scanf("%lld",&k);f=mx(f,k);j+=k;i=mx(i,j);j=mx(j,0);} if (f<=0 && !i) i=f;printf("%lld\n",i);} return 0;}