#include <bits/stdc++.h>
#define ll long long
#define mx 1000000+7
bool a[mx+10];
ll pr[mx], p;

using namespace std;
ll sieve(ll n);
int main()
{
    ll i, j,k, l, m, n;
   while(scanf("%lld", &n)==1)
   {
       if(n == 1)
        m = 0;
       else

       m = sieve(n);
    printf("%lld\n", m);
   }

}
ll sieve(ll n)
{
   ll p = 0;
    ll i, j, k;
    k = sqrt(n);
    pr[p++] = 2;
    for(i = 4; i <= n; i+=2)
        a[i]=1;
    for(i = 3; i <= n; i+=2)
    {
        if(a[i] ==0)
            pr[p++]=i;
        if(i <= k)
            if(a[i] == 0)
        {
            for(j = i*i; j <= n; j+=2*i)
                a[j]=1;
        }
    }
    return p;
}