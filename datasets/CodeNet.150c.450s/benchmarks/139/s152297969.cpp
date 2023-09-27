#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(),(x).end()
#define YES() printf("YES\n")
#define NO() printf("NO\n")
#define Yes() printf("Yes\n")
#define No() printf("No\n")
#define ll long long
#define ld long double
#define pb push_back
#define MOD 1000000007
#define LLMN LONG_LONG_MIN
#define LLMX LONG_LONG_MAX
#define LDMX LDBL_MAX
#define LDMN LDBL_MIN
#define MAX 1000003
#define pll pair<ll, ll>
#define vl vector<ll>
#define vll vector< vector<ll> >

ll mulmod(ll, ll);
ll fastpower(ll, ll);
void getprime(vector<bool>&);
void getfact(vector<ll>&, vector<ll>&);
ll ncr(ll, ll, vector<ll>&, vector<ll>&);

void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<ll>dist(n, LLMX);
    vll adj(n);
    for(ll i=0;i<m;i++)
    {
        ll a, b;
        cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);    
    }
    queue<ll>q;
    q.push(0);
    dist[0] = 0;
    while(!q.empty())
    {
        ll x = q.front();
        q.pop();
        for(auto j : adj[x])
        {
            if(dist[j] == LLMX)
            {
                dist[j] = (x + 1);
                q.push(j);
            }
        }
    }
    bool f = true;
    for(ll i=0;i<n;i++)
    {    if(dist[i] == LLMX)
        {
            f = false;
            break;
        }
    }
    if(f)
    {
        cout<<"Yes\n";
        for(ll i=1;i<n;i++)
            cout<<dist[i]<<"\n";
    }
    else
        No();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    //cin>>t;
    while(t--)
    {
        solve();        
    }
    return 0;
}

ll mulmod(ll a, ll b)
{
    ll res = 0; 
    a = a % MOD;
    while(b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % MOD;
 
        a = (a * 2) % MOD; 
        b /= 2;
    } 
    return res % MOD; 
}

ll  fastpower(ll a, ll n)
{
    ll res = 1;
    while(n > 0)
    {
        if(n % 2 != 0)
        {
            res = (res * a) % MOD;
        }
        n /= 2;
        a = (a * a) % MOD;
    }
    return res;
}

void getprime(vector<bool>&prime)
{
    prime[0] = false;
    prime[1] = false;
    
    for(ll i = 2;i <= MAX; i++)
    {
        if(prime[i])
        {
            for(ll j = i*i; j <= MAX; j += i)
                prime[j] = false;
        }
    }
}

void getfact(vector<ll> &fact, vector<ll> &ifact)
{
    fact[0] = 1;
    ifact[0] = 1;
    
    for(ll i = 1; i <= MAX; i++)
    {
        fact[i] = (fact[i-1] * i)%MOD;
        ifact[i] = (ifact[i-1] * fastpower(i, MOD -2) )%MOD;
    }
}

ll ncr(ll n, ll r, vector<ll>&fact, vector<ll>&ifact)
{
    ll res;
    res = (((fact[n] * ifact[r]) % MOD) * ifact[n-r]) % MOD;
    return res;
}
