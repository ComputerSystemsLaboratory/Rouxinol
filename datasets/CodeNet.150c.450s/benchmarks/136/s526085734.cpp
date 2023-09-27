#include<cstdio>
#include<algorithm>
int main(){int a,b;while(2==scanf("%d%d",&a,&b))printf("%d %d\n",std::__gcd(a,b),a/std::__gcd(a,b)*b);return 0;}