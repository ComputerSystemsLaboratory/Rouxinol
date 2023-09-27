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
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-11;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

int main(){
	while(1){
		int n,m;
		cin>>n;
		if(n==0) break;
		int res=0;
		bool a=0,b=0,B=1;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			if(s=="lu") a=1;
			if(s=="ru") b=1;
			if(s=="ld") a=0;
			if(s=="rd") b=0;
			if(B==a&&B==b){
				res++;
				B^=1;
			}
		}
		cout<<res<<endl;
	}
}
