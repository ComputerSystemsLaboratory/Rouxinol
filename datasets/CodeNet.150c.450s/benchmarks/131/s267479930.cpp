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
		int x,d;
		cin>>x>>d;
		if(d==0) break;
		map<int,int> mp;
		mp[x]=0;
		int cnt=0;
		while(1){
			cnt++;
			x=f(x,d);
			if(mp.find(x)!=mp.end()){
				cout<<mp[x]<<' '<<x<<' '<<cnt-mp[x]<<endl;
				break;
			}
			mp[x]=cnt;
		}
	}
}
