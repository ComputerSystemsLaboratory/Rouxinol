#include <bits/stdc++.h>
#define be(v) (v).begin(),(v).end()
#define pb(q) push_back(q)
typedef long long ll;
using namespace std;
const ll mod=1000000007;
#define doublecout(a) cout<<fixed<<setprecision(10)<<a<<endl;

ll uni[100005];
ll root(ll u){
    if(uni[u]<0)return u;
    return uni[u]=root(uni[u]);
}

void connect(int a,int b){
    a=root(a);
    b=root(b);
    if(a==b)return;
    if(uni[a]<uni[b]){
        a^=b;
        b^=a;
        a^=b;
    }
    uni[a]+=uni[b];
    uni[b]=a;
    return;
}
ll size(ll u){
    return -uni[root(u)];
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(uni,-1,sizeof(uni));
    int n,m,ans=0;
    cin>>n>>m;
    int a,b,c;
    multiset<pair<int,pair<int,int> > > ms;
    for(int i=0;i<m;i++){
    	cin>>a>>b>>c;
    	ms.insert(make_pair(c,make_pair(a,b)));
    }
    for(auto& i:ms){
    	if(root(i.second.first)!=root(i.second.second)){
    		connect(i.second.second,i.second.first);
    		ans+=i.first;
    	}
    }
    cout<<ans<<endl;
    return 0;
}


