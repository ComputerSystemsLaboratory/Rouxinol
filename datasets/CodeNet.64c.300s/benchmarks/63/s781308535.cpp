#include<stdio.h>
typedef unsigned long long ullong;

ullong gcm(ullong a,ullong b){
    ullong m = a%b;
    while(m){
        a = b;
        b = m;
        m = a%b;
    }
    return b;
}

int main(){
  ullong a,b,g;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    g = gcm(a,b);
    printf("%lld %lld\n",g,(a*(b/g)));
  }
}