#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#define MAXN 999999
using namespace std;
bool is_prime[MAXN];
int prime[MAXN];
int main()
{
    int p=0;
    for(int i=0;i<=MAXN;i++) is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=MAXN;i++)
        if(is_prime[i])
    {
        prime[p++]=i;
        for(int j=2*i;j<=MAXN;j+=i) is_prime[j]=false;
    }
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {
      x=lower_bound(prime,prime+p,n)-prime;
      if(prime[x]==n) printf("%d\n",x+1); else printf("%d\n",x);
    }
    return 0;
}