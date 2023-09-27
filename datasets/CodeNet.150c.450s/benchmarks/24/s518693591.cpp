#include <bits/stdc++.h>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef vector<pll> vpll;
typedef pair<ll,pll> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-11;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
const int DX[8]={-1,0,1,0,-1,-1,1,1},DY[8]={0,-1,0,1,-1,1,-1,1};

int f(int x,int d){
	auto s=to_string(x);
	while(s.size()<d) s+='0';
	sort(s.begin(),s.end());
	auto t=s;
	reverse(t.begin(),t.end());
	return atoi(t.c_str())-atoi(s.c_str());
}

int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0) break;
		vp a(n);
		int res=0;
		for(int i=0;i<n;i++){
			cin>>a[i].second>>a[i].first;
			res+=a[i].first*a[i].second;
		}
		sort(a.rbegin(),a.rend());
		for(int i=0;i<n&&m;i++){
			int t=min(m,a[i].second);
			res-=t*a[i].first;
			m-=t;
		}
		cout<<res<<endl;
	}
}
