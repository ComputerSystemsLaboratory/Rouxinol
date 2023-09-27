#include <bits/stdc++.h>
#define be(v) (v).begin(),(v).end()
#define pb(q) push_back(q)
typedef long long ll;
using namespace std;
const ll mod=1000000007;
#define doublecout(a) cout<<fixed<<setprecision(10)<<a<<endl;
struct edge{ll from,to,cost;};
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    ll n,m,a,b,c,r;
    cin>>n>>m>>r;
    ll d[n];
    bool maki;
    vector<edge> g;
    for(int i=0;i<n;i++)d[i]=mod*mod;
    d[r]=0;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        g.push_back({a,b,c});
    }
    for(int i=0;i<n*2;i++){
    	maki=false;
        for(int j=0;j<m;j++){
            if(d[g[j].from]!=mod*mod&&d[g[j].to]>d[g[j].from]+g[j].cost){
                d[g[j].to]=d[g[j].from]+g[j].cost;
                maki=true;
            }
        }
    }
    if(maki){
    	cout << "NEGATIVE CYCLE" <<endl;
    	return 0;
    }
    for(int i=0;i<n;i++){
    	if(d[i]==mod*mod){
    		cout << "INF" <<endl;
    	}else{
    		cout << d[i] <<endl;
    	}
    }
    return 0;
}

