//Author: A_S_M_M@sud_P@rvez
#include<bits/stdc++.h>
using namespace std;
#define    MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define    For(i,n) for(int i=0;i<n;i++)
#define    forn(i,n) for(int i=1;i<=n;i++)
#define    fors(i,s) for(int i=0;i<s.size();i++)
#define    all(v) v.begin(),v.end()
#define    gcd(a, b) __gcd(a , b)
#define    lcm(a,b) (a*(b/__gcd(a,b)))
#define    test   int t;cin>>t;for(int l=0;l<t;l++)
#define    min3(a,b,c)     min(a,min(b,c))
#define    max3(a,b,c)     max(a,max(b,c))
#define    min4(a,b,c,d)   min(min(a,b),min(c,d))
#define    max4(a,b,c,d)   max(max(a,b),max(c,d))
#define    nl     "\n"
#define    End    return 0 
#define    gt     greater<int>()
#define    ll     long long 
#define    mp     make_pair
#define    pb     push_back
#define    vi     vector<int>
#define    vl     vector<ll>
#define    mod    1000000007
#define    sp(n)  fixed<<setprecision(n)
#define    pi     acos(-1)

int main()
{
MP;
    //test
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        For(i,n)cin>>a[i];
        for(int i=m;i<n;i++){
            if(a[i-m]<a[i])cout<<"Yes"<<nl;
            else cout<<"No"<<nl;
        }
    }

End;
}
