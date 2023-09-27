#include<bits/stdc++.h>
using namespace std;

#define IOS             ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define watch(x);       cout << "\n" <<  #x << " is: " << x << "\n";
#define ll              long long int
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define pb              push_back
#define nl              cout<<"\n"
#define gcd(a,b)        __gcd(a,b)
#define sq(a)           (a)*(a)
#define loop(i,a,b)     for (int i = a; i <= b; i++)
#define rloop(i,a,b)    for (int i = a; i >= b; i--)
#define sz(a)           a.size()
#define mod             1000000007
#define PI              2*acos(0.0)
ll b[100005];
int main()
{
    IOS
    int T=1;
    //cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        ll a[n],sum=0;
        memset(b,0,sizeof b);
        loop(i,0,n-1)
        {
            cin>>a[i];
            b[a[i]]++;
            sum+=a[i];
        }
        int q;
        cin>>q;
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            sum=sum+b[x]*(y-x);
            cout<<sum;
            b[y]+=b[x];
            b[x]=0;
            nl;
        }

    }
    return 0;
}
