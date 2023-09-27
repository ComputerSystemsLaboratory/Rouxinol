/*     *******************Bismillahir Rahmanir Rahim************************
                          MD. ASFAKUL GHANI!
                          *ProMAGFAT*!
 SECRET_warning :)->FAT   CSE-25!
                          JAHANGIRNAGAR UNIVERSITY!
                          Dhaka,Bangladesh!
*/

#include <bits/stdc++.h>
using namespace std;

#define           fasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define           Im int main()
#define           ll long long
#define           sc scanf
#define           pf printf
#define           rn0 return 0
#define           rn return
#define           f0(i,n) for(ll i=0;i<n;i++)
#define           f1(i,n) for(ll i=1;i<=n;i++)
#define           f2(i,n) for(ll i=n-1;i>=0;i--)
#define           pi 2*acos(0.0)
#define           modulo 1000003
#define           dd double
#define           PI 3.14159265358979
#define           pi 2*acos(0.0)
#define           p_b push_back
#define           ps push

/*
ll for_binarySearch(ll a,ll b,ll aa[],ll x){while(a<=b){ll mid=(a+b)/2;if(aa[mid]==x) return 1;else if(aa[mid] > x) b=mid-1;else a=mid+1;}return -1;}
ll for_gcd(ll a,ll b){if(a==0) return b;else return for_gcd(b%a,a);}
ll for_prime(ll x){for (ll i=2;i*i<=x;i++){if(x%i==0) return 0;}return 1;}
void for_swap(char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
ll for_big_mod(ll b,ll p,ll m){if(p==0) return 1;else if(p%2==0){ll k=for_big_mod(b,p/2,m);return (k*k)%m;}else return ((b%m)*(for_big_mod(b,p-1,m)))%m;}
ll for_josephus(ll n,ll k){if(n==1) return 1;return (for_josephus(n-1,k)+k-1)%n+1;}
ll for_gcdExtended(ll a,ll b,ll *x,ll *y){if(a==0){*x=0;*y=1;return b;}ll x1,y1;ll gcd=for_gcdExtended(b%a,a,&x1,&y1);*x=y1-(b/a)*x1;*y=x1;return gcd;}
*/
/*
void debug1()
{
    cout << "***" << endl;
}

void debug11(ll n)
{
    cout << n << endl;
}
*/
#define MAX 100010
ll prime[MAX],c;
bool vis[MAX+2];
void FAT_pf()
{
    vis[0] = vis[1] = 1;
    for (ll i = 4; i < MAX; i += 2) vis[i] = 1;
    prime[c++] = 2;
    for (ll i = 3; i < MAX; i += 2){
        if (!vis[i]){
            prime[c++] = i;
            for (ll j = (i*i); j < MAX; j += (i+i)) vis[j] = 1;
        }
    }
}

Im
{
    /*#ifdef FAT
       freopen("input.txt","w",stdin);
    #endif // FAT*/

    fasterIO;

    FAT_pf();
    ll n;
    cin>>n;
    ll a1[101010];
    ll f = 0;
    ll p = n;
    for (ll i = 0; prime[i]*prime[i] <= p; i += 1){
        while (n%prime[i]==0){
            a1[f++] = prime[i];
            n /= prime[i];
        }
    }

    if (n>1) a1[f++] = n;

    cout << p << ":";
    for (ll i = 0; i < f; i += 1) cout << " " << a1[i];
    cout << endl;


    //main();

    rn0;
}