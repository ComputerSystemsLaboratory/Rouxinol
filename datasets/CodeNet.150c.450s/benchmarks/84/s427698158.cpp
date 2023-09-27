#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> P;
typedef pair<int,int> Pi;
#define rep(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define fi first
#define se second
#define endl "\n"

template<typename T> inline bool chmax(T &a, T b){if(a<b){a=b;return true;}return false;}
template<typename T> inline bool chmin(T &a, T b){if(a>b){a=b;return true;}return false;}
template<typename T> ostream& operator<<(ostream& s,const complex<T>& d) {return s<<"("<<d.real()<<", "<<d.imag()<< ")";}
template<typename T1, typename T2> ostream& operator<<(ostream& s,const pair<T1,T2>& d) {return s<<"("<<d.first<<", "<<d.second<<")";}
template<typename T> ostream& operator<<(ostream& s, const vector<T>& d){int len=d.size();rep(i,len){s<<d[i];if(i<len-1) s<<" ";}return s;}
template<typename T> ostream& operator<<(ostream& s,const vector<vector<T>>& d){int len=d.size();rep(i,len){s<<d[i]<<endl;}return s;}
template<typename T> ostream& operator<<(ostream& s,const set<T>& v){s<<"{ ";for(auto itr=v.begin();itr!=v.end();++itr) {if (itr!=v.begin()) {s<< ", ";}s<<(*itr);}s<<" }";return s;}
template<typename T1, typename T2> ostream& operator<<(ostream& s,const map<T1,T2>& m){s<<"{"<<endl;for(auto itr=m.begin();itr!=m.end();++itr){s<<" "<<(*itr).first<<" : "<<(*itr).second<<endl;}s<<"}"<<endl;return s;}

const ll mod=1e9+7;
const ll inf=1e17;
const int INF=1e9;
const double PI=acos(-1);
const double EPS=1e-10;

template<typename T>
struct FenwickTree{
	vector<T> node;
	int n;
	int sz;
	FenwickTree(int n) :n(n) { 
		node.resize(n+1LL,0);
		sz=1;
		while(sz<node.size()) sz*=2;
	}
	T sum(int k) {
		T ret = 0;
		for (;k>0;k-=(k & -k)) ret+=node[k];
		return ret;
	}
	
	T sum(int a, int b){return sum(b)-sum(a);}//[a,b)
 
	void add(int k, T x) {
		for(;k<=n;k+=(k & -k)) node[k]+=x;
	}
};

//Compress<ll> comp(a);みたいな感じで
template <class T>
struct Compress{
    int N;
    map<T,int> idx;
    vector<T> cmp;
    Compress(vector<T> v){
        for(auto& x:v) cmp.push_back(x);
        sort(cmp.begin(),cmp.end());
        cmp.erase(unique(cmp.begin(),cmp.end()),cmp.end());
        N=cmp.size();
        for(int i=0;i<N;i++) idx[cmp[i]]=i;
    }
    int id(T val){return idx[val];}//前→後
    T val(int id){return cmp[id];}//後→前
};
	

int main(){
    cin.tie(0);ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<ll> a(n);
    FenwickTree<ll> seg(n+1);
    ll ans=0;
    rep(i,n){
        cin>>a[i];
    }
    Compress<ll> comp(a);
    rep(i,n){
        a[i]=comp.id(a[i])+1;
    }
    rep(i,n){
        ans+=seg.sum(a[i],n+1);
        seg.add(a[i],1);
    }
    cout<<ans<<endl;
}
