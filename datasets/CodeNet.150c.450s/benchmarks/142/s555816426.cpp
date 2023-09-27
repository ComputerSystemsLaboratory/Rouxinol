#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N=1000000007;
//ll power(ll a,ll b,ll mod)
//{
//    ll result=1;
//    while(b>0)
//    {
//        if(b%2==1)
//            result=(result*a)%mod;
//        a=(a*a)%mod;
//        b=b/2;
//    }
//    return result;
//}
//ll d,x,y;
//void extendedEuclid(ll a,ll b)
//{
//    if(b==0)
//    {
//        d=a; x=1; y=0;
//    }
//    else
//    {
//        extendedEuclid(b,a%b);
//        ll temp=x; x=y; y=temp-(a/b)*y;
//    }
//}
//ll modInverse(ll a,ll m)
//{
//    extendedEuclid(a,m);
//    return (x%m+m)%m;
//}
//ll lcm(ll a,ll b)
//{
//    if(a==0||b==0)
//        return 0;
//    return (a*b)/(__gcd(a,b));
//}
//void sieve(ll n)
//{
//    bool isPrime[n+1];
//    isPrime[0]=false; isPrime[1]=false;
//    for(ll i=2;i<=n;i++)
//        isPrime[i]=true;
//    for(ll i=2;i*i<=n;i++)
//    {
//        if(isPrime[i]==true)
//        {
//            for(ll j=i*i;j<=n;j+=i)
//                isPrime[j]=false;
//        }
//    }
//}
//bool isPowerOfTwo(ll n)
//{
//    return (n&&!(n&(n-1)));
//}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i,j; cin>>n>>k; ll A[n];
    for(i=1;i<=n;i++) cin>>A[i];
    for(i=k+1;i<=n;i++)
    {
        if(A[i-k]<A[i]) cout<<"Yes"<<endl;
        else  cout<<"No"<<endl;
    }
}
