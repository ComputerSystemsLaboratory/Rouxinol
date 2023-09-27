#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const long double pi=3.14159265358979323846;
#define x  first
#define y  second
#define deb(...)                 __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 <<'\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
bool isPar(string s)
{
    ll n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return 0;
        }
    }
    return 1;
}

ll nOfD(ll n)
{
    ll d=0;
    ll i=1;
    while(i * i < n)
    {
        if(n%i ==0) d+=2;
        i++;
    }
    if(i * i == n)d++;
    return d;
}
ll sOfD(ll n)
{
    ll sum=0;
    ll i=1;
    while(i * i < n)
    {
        if(n%i ==0) sum+=i,sum+=n/i;
        i++;
    }
    if(i * i == n)sum+=i;
    return sum;
}
bool isP(ll x)
{
    if(x==2)return 1;
    if(x<2 || x%2==0)return 0;
    for(ll i=3;i * i <= x;i+=2)
    {
        if(x%i==0)return 0;
    }
    return 1;
}
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b) * b);
}
ll ps[20002]={};
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    //freopen("op.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t=1;
    //cin>>t;
    while(t--)
    {
        for(int i=1;i<=100;i++)
        {
            if(!i)continue;
            for(int j=1;j<=100;j++)
            {
                if(!j)continue;
                for(int k=1;k<=100;k++)
                {
                    if(!k)continue;
                    if(i*i + j*j + k*k + i*k + j*k + i*j > 10000)break;
                    ps[i*i + j*j + k*k + i*k + j*k + i*j]++;
                }
            }
        }
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)cout<<ps[i]<<'\n';

    }
    return 0;
}
