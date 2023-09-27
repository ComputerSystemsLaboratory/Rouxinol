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
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<29;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-11;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};


int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		vi a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		int res=inf;
		for(int i=0;i<n-1;i++) res=min(res,a[i+1]-a[i]);
		cout<<res<<endl;
	}
}
