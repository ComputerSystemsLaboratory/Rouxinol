#include<bits/stdc++.h>
using namespace std;
#define oo (long long)1e18
#define ll long long
#define setdp memset(dp,-1,sizeof(dp))
const ll mod = 1e9+7;
void _IOS(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);cin.sync_with_stdio(0);}
#define PI 3.14159265359
int n,m;
int x,y,xs,ys;
ll a[2003];
ll b[2003];
bool vis[1009][1009];
int ans[1000004];
int main()
{
   // freopen ("jumping.in","r",stdin);
   _IOS();
    cin>>n;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            for(int k=1;k<=100;k++)
            {
                int q=(i*i)+(j*j)+(k*k)+i*j+j*k+i*k;
                ans[q]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<endl;
}
