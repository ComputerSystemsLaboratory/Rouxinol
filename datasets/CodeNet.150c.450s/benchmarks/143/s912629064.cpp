#include <iostream>
#include <cstdio>
#define int long long
using namespace std;
const int INF=1e5+5;
int n,num[INF],q;
long long sum;
signed main()
{
        scanf("%lld",&n);
        for (int i=1; i<=n; i++) {
                int x=0;
                scanf("%lld",&x);
                sum+=x;
                num[x]++;
        }
        scanf("%lld",&q);
        while (q--) {
                int x=0,y=0;
                scanf("%lld %lld",&x,&y);
                num[y]+=num[x];
                sum+=(y-x)*num[x];
                num[x]=0;
                cout<<sum<<"\n";
        }
        return 0;
}
