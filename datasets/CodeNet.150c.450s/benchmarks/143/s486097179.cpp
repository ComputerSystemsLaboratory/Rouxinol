#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#include <functional>
#include <vector>
#include <stack>
#include <set>
#include <bitset>
using namespace std;
typedef  long long ll;
const int maxn=2e5+50;
const int inf=0x3f3f3f3f;
const int MOD=1e9+7;
const int HASH=131;

int a[maxn];
int main()
{
    int n;
    cin>>n;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        int tmp;
        scanf("%d",&tmp);
        a[tmp]++;
        ans+=tmp;
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int b,c;
        scanf("%d %d",&b,&c);
        ans=ans-a[b]*b+a[b]*c;
        a[c]+=a[b];
        a[b]=0;
        cout<<ans<<endl;
    }

}
