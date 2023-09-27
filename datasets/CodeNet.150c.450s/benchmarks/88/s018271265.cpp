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

int h,w;

int main(){
	while(1){
		cin>>h>>w;
		if(h==0) break;
		int res=inf,a,b;
		for(int i=1;i*i<h*h+w*w;i++){
			int c=i,d=0;
			while(c*c+d*d<h*h+w*w) d++;
			if(c*c+d*d==h*h+w*w&&c<=h) d++;
			if(c<d&&c*c+d*d<res){
				res=c*c+d*d;
				a=c;
				b=d;
			}
		}
		cout<<a<<' '<<b<<endl;
	}
}
