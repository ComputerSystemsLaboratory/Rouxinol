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

int g(string s){
	return atoi(s.c_str());
}

int f(string t){
	int h=g(t.substr(0,2));
	int m=g(t.substr(3,2));
	int s=g(t.substr(6,2));
	return h*60*60+m*60+s;
}

const int M=100000;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		vvi a(5,vi(n));
		for(int i=n-1;i>=0;i--) for(int j=0;j<5;j++) cin>>a[j][i];
		int res=0;
		while(1){
			bool B=0;
			for(int i=0;i<a[2].size();i++){
				int l=2,r=2;
				while(l>0&&i<a[l-1].size()&&a[l-1][i]==a[2][i]) l--;
				while(r<4&&i<a[r+1].size()&&a[r+1][i]==a[2][i]) r++;
				if(r-l+1>=3){
					for(int j=l;j<=r;j++) res+=a[j][i],a[j][i]=0;
					B=1;
				}
			}
			vvi b(5);
			for(int i=0;i<5;i++) for(auto j:a[i]) if(j) b[i].push_back(j);
			a=b;
			if(!B) break;
		}
		cout<<res<<endl;
	}
}
