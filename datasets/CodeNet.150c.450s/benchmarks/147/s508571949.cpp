#include <bits/stdc++.h>
#include<cstdlib>

/*If you are going to try,keep going until the end ,or don't even try to start*/

/* Remember, Hope is a good thing... May be the best of things... And No Good thing ever Dies !!!*/

using namespace std;

#define ll long long
#define nada "\n"
#define st string
#define S  second
#define F  first
#define pb push_back
#define MP make_pair
#define isnttriangle(a,b,c)  (a+b<c||a+c<b||b+c<a)
#define todegree(rad) rad*(180.0/pi)
#define rrp(i, a, b)  for(ll i = a; i >= b; i--)
#define repp(i,a,b)   for (int i = int(a); i <=int(b); i++)
#define rep(i, n)     for (int i = 0; i <n; i++)
#define rep1(i,n)     for (int i = 1; i <=n; i++)
#define allr(v)       ((v).rbegin()), ((v).rend())
#define all(v)        ((v).begin()),((v).end())
#define fx(n)         cout<<fixed<<setprecision(n);
#define sz(v)         ((int)(v).size())
#define Test          ll t;cin>>t;while(t--)
#define mod           1000000009LL


const double ME = 2.71828;
const int    N  = 3e5 + 20;
const int   inf = 0x3f3f3f3f;
const double pi = 3.141592653;




void LOSER()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void file()
{
    freopen("records.in", "r", stdin);
    //freopen("text.out", "w", stdout);
}

ll gcd(ll a, ll b)
{
    //Eculidean Algorthim
    return (!b) ? a : gcd(b, a % b);
    //complixty=log(ab);
}

ll lcm(ll a,ll b)
{
    return a / gcd(a, b) * b;
}

ll Fib_recur(ll n)
{
    vector<ll>v(n+5,0);
    //BaseCase
    v[1]=0;
    v[2]=1;
    repp(i,3,n)v[i]=v[i-1]+v[i-2];
    return v[n];
}

bool isprime(ll n)
{
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}



void Solve()
{
    vector<int>ans(10050,0);
    int n,v=0;
    cin>>n;
    rep1(i,105)
    {
        rep1(j,105)
        {
            rep1(k,105)
            {
                if(v = i*i+j*j+k*k+i*j+j*k+k*i)
                    if(v<10050)ans[v]+=1;
            }
        }
    }
    rep1(i,n)
    {
        cout<<ans[i]<<nada;
    }
}




//"I AM A LOSER ";

int main()
{
    // fx(7)
    //file();
    LOSER();
    //Test

    Solve();

}
