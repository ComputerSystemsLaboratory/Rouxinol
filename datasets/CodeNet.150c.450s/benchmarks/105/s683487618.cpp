#include <bits/stdc++.h>

using namespace std;
#define int long long
int po[63];
int f(int x)
{
    for(int i=62;i>=0;i--)
    {
        if(po[i] & x)
        {
            return i;
        }
    }
    return -1;
}
vector <int> basis(vector <int> v)
{
    if(v.size()==1) return v;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(v[0]==0)
    {
        vector <int> ans;
        return ans;
    }
    int n=v.size();
    vector <int> g;
    for(int i=1;i<n;++i)
    {
        if(f(v[i])==f(v[0]))
        {
            v[i]=v[i]^v[0];
        }
        g.push_back(v[i]);
    }
    vector <int> ans=basis(g);
    ans.insert(ans.begin(),v[0]);
    return ans;
}
bool can(vector <int> v,int x)
{
    int n=v.size();
    for(int i=0;i<n;++i)
    {
        if(x==0)
        {
            return true;
        }
        if(f(x)==f(v[i]))
        {
            x^=v[i];
        }
    }
    return (x==0);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int u=1;
    for(int i=0;i<63;++i)
    {
        po[i]=u;
        u*=2;
    }
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector <int> v;
    bool h=true;
    for(int i=(n-1);i>=0;i--)
    {
        if(s[i]=='0')
        {
            v.push_back(a[i]);
            v=basis(v);
        }
        else
        {
            if(!can(v,a[i]))
            {
                 h=false;
                 break;
            }
        }
    }
    if(h)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    }
    return 0;
}
