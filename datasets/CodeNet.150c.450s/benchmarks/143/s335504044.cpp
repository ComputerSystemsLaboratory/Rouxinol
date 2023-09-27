#include<bits/stdc++.h>
#define lg long long int
#define loop(i,s,e) for(lg i=s;i<=e;i++)
#define iloop(i,s,e) for(lg i=e;i>=s;i--)
#define pb push_back
#define mp make_pair
#define mod 1000000007


using namespace std;

lg min(lg a,lg b)
{return a<b?a:b;}
lg max(lg a,lg b)
{return a>b?a:b;}
lg lcm(lg a ,lg b)
{
    return (a*b)/__gcd(a,b);
}
lg n,m,k,ans;
int main()
{
    cin>>n;
    vector<lg>nums(100001,0);
    ans = 0;
    for(lg i=0;i<n;i++)
    {
        lg in;
        cin>>in;
        ans+=in;
        nums[in]++;
    }
    cin>>k;
    for(lg i = 0;i<k;i++)
    {
        lg b,c;
        cin>>b>>c;
        if(nums[b]>0)
        {
            lg co=nums[b];
            nums[b]=0;
            nums[c]+=co;
            ans+=(c-b)*co;
        }
        cout<<ans<<endl;
    }
}
