#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=1e6+7;
const int inf=INT_MAX;
const ll inff=1e18;
const ll mod=1e9+7;
#define pii pair<int,int>
#define mkp make_pair
#define F first
#define S second
#define pb push_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define int ll

#ifdef HNO2
#define IOS
#else
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#endif // HNO2

int base[70];
int a[207];

int32_t main()
{
    IOS
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=1;i<=n;i++) cin>>a[i];
        string s;
        cin>>s;

        memset(base,0,sizeof(base));
        int ok=0;
        for (int i=n;i>=1;i--)
        {
            int used=0;
            for (int j=61;j>=0;j--)
            {
                if ((1ll<<j)&a[i])
                {
                    if (base[j]==0)
                    {
                        base[j]=a[i];
                        used=1;
                        for (int k=j-1;k>=0;k--)
                            if (base[k]&&(base[j]&(1ll<<k))) base[j]^=base[k];
                        for (int k=j+1;k<=61;k++)
                            if (base[k]&(1ll<<j)) base[k]^=base[j];
                        break;
                    }
                    else a[i]^=base[j];
                }
            }
            if (used&&s[i-1]=='1') ok=1;
        }
        cout<<ok<<endl;
    }
}
