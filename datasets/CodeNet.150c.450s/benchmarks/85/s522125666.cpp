#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;

ll dp[105][105];
vector<pair<ll,ll> >v;


ll mcm(int left,int right)
{

    if(left>=right) return 0;
    if(dp[left][right]!=INT_MAX) return dp[left][right];
//cout<<"ok"<<endl;
    ll ans=INT_MAX;

    for(int i=left;i<right;i++)
    {
        ll res_left= mcm(left,i);
        ll res_right= mcm(i+1,right);
        ll res=v[left].first*v[i].second*v[right].second;
        ans=min(ans, res+res_left+res_right);
        //cout<<ans<<endl;
    }
    return dp[left][right]=ans;
}



int main()
{
    for(int i=0;i<104;i++) for(int j=0;j<104;j++) dp[i][j]=INT_MAX;

    int n,temp; cin>>n;
    temp=n;
    while(temp--)
    {
        int a,b; cin>>a>>b;
        v.pb({a,b});
    }

    cout<<mcm(0,n-1)<<endl;

}

