#include <bits/stdc++.h>
#define eps 1e-10;
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int maxn=2e5+100;

int n,a[maxn],tree[maxn];
vector<int> v;
LL ans=0;
int getid(int x) {return lower_bound(v.begin(),v.end(),x)-v.begin()+1;}
int lowbit(int x) {return x&(-x);}
void add(int x,int y) {for(int i=x;i<=n+2;i+=lowbit(i)) tree[i]+=y;}
LL getsum(int x) {
    LL ret=0;
    for(int i=x;i;i-=lowbit(i)) ret+=tree[i];
    return ret;
}

int main() {
    #ifdef ac
        freopen("in.txt","r",stdin);
        //freopen("out.txt","w",stdout);
    #endif // ac
    cin >> n;
    for(int i=1;i<=n;++i) cin >> a[i],v.push_back(a[i]);
    sort(v.begin(),v.end());  v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=n;i;--i) {
        int id=getid(a[i]);
        ans+=getsum(id); add(id+1,1);
    }
    cout << ans << endl;
    return 0;
}