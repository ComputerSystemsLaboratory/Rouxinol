#include<cstdio>
typedef long long int ll;
ll f(ll n){return n==0?1:n*f(n-1);}
int main(){
  int n;scanf("%d",&n);printf("%lld\n",f(n));
}