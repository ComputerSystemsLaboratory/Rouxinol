#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define endl        "\n"
#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define pb          push_back
#define mk          make_pair
#define loop(n)     for(int i=0; i<n; i++)
#define FOR(a,b)    for(int i=a; i<=b; i++)
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define md          1000000007
#define pi          acos(-1.0)

ll a[200010];
map<ll,ll>m;
vector<ll>v;
string s,q;

int main()
{
   ll t,n,i,j,k,l,r,mn=0, mx=0;
   sl(n);
       for(int i=0; i<n; i++)
       {
           sl(a[i]);
           m[a[i]]++;
           mx+=a[i];
       }
    sl(k);

    loop(k)
    {
        sl2(l,r);
        mx+=(r-l)*m[l];
        m[r]+=m[l];
        m[l]=0;
        printf("%lld\n", mx);
    }
}

