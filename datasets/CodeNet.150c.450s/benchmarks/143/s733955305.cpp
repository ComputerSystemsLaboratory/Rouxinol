/**In the name of Allah, the Most Merciful, the Most Merciful.**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define INF 9223372036854775806
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define EPS 1e-9
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll min(ll a,ll b) {if(a<b) return a; else return b;}
map<int,int> cnt;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    ll sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        cnt[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        ll x,y;
        cin>>x>>y;
        ll a=cnt[x]*x;
        ll b=cnt[x]*y;
        cnt[y]+=cnt[x];
        cnt[x]=0;
        sum-=a;
        sum+=b;
        cout<<sum<<endl;
    }

    return 0;
}


