#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define fi first
#define se second
#define pb push_back
#define rep(i, s, n) for (int i = s; i < n; i++)
#define rrep(i, s, n) for (int i = (n)-1; i >= (s); i--)
#define REP(i,n) for(int i = 0;i < n; i++)
#define all(a) a.begin(),a.end()
typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
const long long MOD = 1000000007, INF = 1e18;

#define endl '\n'
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0)
 
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>vector<T>
make_v(size_t a){return vector<T>(a);}
template<typename T,typename... Ts>
auto make_v(size_t a,Ts... ts){
	return vector<decltype(make_v<T>(ts...))>(a,make_v<T>(ts...));
}

template<typename T,typename V>
typename enable_if<is_class<T>::value==0>::type
fill_v(T &t,const V &v){t=v;}

template<typename T,typename V>
typename enable_if<is_class<T>::value!=0>::type
fill_v(T &t,const V &v){
	for(auto &e:t) fill_v(e,v);
}


signed main(){
	IOS();
	vector<int>ans;
	while(1){
		int N,M;
		cin>>N>>M;
		if(!N&&!M)break;
		int cost = 0;
		vector<pair<int,int>>v(N);
		rep(i,0,N)cin>>v[i].se>>v[i].fi;
		sort(all(v));
		reverse(all(v));
		rep(i,0,N){
			if(M>=v[i].se)M-=v[i].se;
			else{
				cost+=(v[i].se-M)*v[i].fi;
				M=max(0ll,M-v[i].se);
			}
		}
		ans.push_back(cost);
	}
	for(auto e:ans){
		cout<<e<<endl;
	}
}
