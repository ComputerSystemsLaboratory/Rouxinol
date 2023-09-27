#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    com(i,n)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<ll>b;
    mom(i,n-1)
    {
        ll v=a[i];
        for(auto x:b)
        {
            v=min(v,v^x);
        }
        if(v)
        {
            if(s[i]=='1')
            {
                cout << 1 << endl;
                return;
            }
            b.push_back(v);
        }
    }
    cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
