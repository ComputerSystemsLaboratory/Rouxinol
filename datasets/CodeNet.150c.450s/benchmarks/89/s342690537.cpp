#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#define MAXN 1000001
using namespace std;
int prime[MAXN];
bool is_prime[MAXN];
int sum_prime[MAXN];
int sieve(int n){
  int p=0;
  for(int i=0;i<=n;i++) is_prime[i]=true;
  is_prime[0]=is_prime[1]=false;
  for(int i=2;i<=n;i++){
    if(is_prime[i]){
      prime[p++]=i;
      for(int j=2*i;j<=n;j+=i) is_prime[j]=false;
    }
  }
  return p;

}
int main(void){
  int i;
  int a,d,n;
  sieve(MAXN);
  while(scanf("%d %d %d",&a,&d,&n),a|d|n){
    i=0;
    while(a>prime[i])i++;
    while(n){
      if(((prime[i]-a)%d)==0) n--;
      i++;
    }
    printf("%d\n",prime[i-1]);
  }
  return 0;
}