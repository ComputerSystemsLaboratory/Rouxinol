#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <stack>
#include <map>
#include <bitset>
#define ri register
#define inf 0x7fffffff
#define E (1)
#define mk make_pair
#define int long long
//#define double long double
using namespace std; const int N=200010;
inline int read()
{
    int s=0, w=1; ri char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') w=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9') s=(s<<3)+(s<<1)+(ch-'0'), ch=getchar();
    return s*w;
}
void print(int x) { if(x<0) x=-x, putchar('-'); if(x>9) print(x/10); putchar(x%10+'0'); }
int n,a[N],res;
signed main()
{
    n=read();
    for(ri int i=1;i<=n;i++)
    {
        int x=read();
        a[x]++;
    }
    for(ri int i=1;i<=100000;i++) res+=a[i]*i;
    for(ri int q=read();q;q--)
    {
        int b,c;
        b=read(), c=read();
        res+=(c-b)*a[b];
        a[c]+=a[b], a[b]=0;
        printf("%lld\n",res);
    }
    return 0;
}