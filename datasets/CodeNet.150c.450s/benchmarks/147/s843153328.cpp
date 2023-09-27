#include<bits/stdc++.h>

using namespace std;

typedef long long int li;
typedef long double ld;
typedef vector<li> vi;
typedef pair<li,li> pi;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define B begin()
#define E end()
#define f(i,l,r) for(li i=l;i<=r;++i)
#define fr(i,l,r) for(li i=l;i>=r;--i)
#define u_map unordered_map
#define endl "\n"
#define debug(x) cout<<#x<<" = "<<x<<endl;

li fastpow(li base,li exp) 
{
    li res=1;
    while(exp>0) {
        if(exp&1)
            res=(res*base);

        base=(base*base);
        exp>>=1;
    }
    return res;
}

void solve()
{
    li n;

    cin>>n;

    vi ans(n+1);

    f(i,1,105)
    {
        f(j,1,105)
        {
            f(k,1,105)
            {
                li val=fastpow(i+j+k,2)-i*j-j*k-k*i;

                if(val<=n)
                {
                    ans[val]++;
                }
            }
        }
    }

    f(i,1,n)
    cout<<ans[i]<<endl;
}

int main()
{    
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    li t=1;

    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}