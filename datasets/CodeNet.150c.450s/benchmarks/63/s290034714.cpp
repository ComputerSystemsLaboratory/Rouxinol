//author:ynymxiaolongbao
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<cassert>
#include<stack>
#include<fstream>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<ll,pair<ll,ll> >plll;
typedef pair<pair<ll,ll>,pair<ll,ll> >pllll;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define chmin(a,b) a=min(a,b)
#define chmax(a,b) a=max(a,b)
#define mp make_pair
pll mpll(ll a,ll b){return mp(a,b);}
plll mplll(ll a,ll b,ll c){return mp(a,mp(b,c));}
pllll mpllll(ll a,ll b,ll c,ll d){return mp(mp(a,b),mp(c,d));}
#define inf 4e18

//mod↓
#define mod 1000000007
#define pl(a,b) a=(a+b)%mod;
ll powmod(ll x,ll y){
	ll res=1;
	for(;y;y>>=1){
		if(y&1)res=res*x%mod;
		x=x*x%mod;
	}
	return res;
}
ll gcd(ll a,ll b){
	return (b?gcd(b,a%b):a);
}
#define FAC 1000010
ll fac[FAC],ivf[FAC],inv[FAC];
void initfac(){
	fac[0]=ivf[0]=inv[1]=1;
	for(ll i=1;i<FAC;i++){
		if(i>1)inv[i]=(mod-mod/i*inv[mod%i]%mod)%mod;
		ivf[i]=ivf[i-1]*inv[i]%mod;
		fac[i]=fac[i-1]*i%mod;
	}
}
ll Pmod(ll n,ll k){
	if(n<k)return 0;
	if(k<0)return 0;
	return fac[n]*ivf[n-k]%mod;
}
ll Cmod(ll n,ll k){
	if(n<k)return 0;
	if(k<0)return 0;
	return fac[n]*ivf[n-k]%mod*ivf[k]%mod;
}
//mod↑

class UnionFind{
	public:
	int n,*dat;
	int comp;
	void init(int N){
		n=N;
		dat=new int[n];
		rep(i,n)dat[i]=-1;
		comp=n;
	}
	int par(int x){
		if(dat[x]<0)return x;
		return par(dat[x]);
	}
	void unite(int a,int b){
		a=par(a),b=par(b);
		if(a==b)return;
		if(-dat[a]<-dat[b])swap(a,b);
		dat[a]+=dat[b];
		dat[b]=a;
		comp--;
	}
	bool same(int a,int b){
		a=par(a),b=par(b);
		return a==b;
	}
	int size(int a){
		a=par(a);
		return -dat[a];
	}
};
class Dijkstra{
	public:
	int n;
	ll *dist,*pre;
	vector<int> *to;
	vector<ll> *len;
	void init(int N){
		n=N;
		dist=new ll[n];
		pre=new ll[n];
		to=new vector<int>[n];
		len=new vector<ll>[n];
	}
	void aed(int a,int b,ll c){
		to[a].push_back(b);
		len[a].push_back(c);
	}
	void aeud(int a,int b,ll c){
		aed(a,b,c);
		aed(b,a,c);
	}
	void work(int s){
		rep(i,n)dist[i]=inf;
		priority_queue<plll,vector<plll>,greater<plll> > Q;
		Q.push(mplll(0,s,-1));
		while(!Q.empty()){
			ll cost=Q.top().first;
			ll x=Q.top().second.first;
			ll from=Q.top().second.second;
			Q.pop();
			if(dist[x]<=cost)continue;
			dist[x]=cost;
			pre[x]=from;
			rep(i,to[x].size()){
				Q.push(mplll(cost+len[x][i],to[x][i],x));
			}
		}
	}
};

#define ARR 500010
int v,e,r;
int s[ARR],t[ARR],d[ARR];
int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin>>v>>e>>r;
	Dijkstra dijk;
	dijk.init(v);
	rep(i,e){
		cin>>s[i]>>t[i]>>d[i];
		dijk.aed(s[i],t[i],d[i]);
	}
	dijk.work(r);
	rep(i,v){
		ll res=dijk.dist[i];
		if(res==inf)cout<<"INF\n";
		else cout<<res<<"\n";
	}
}

