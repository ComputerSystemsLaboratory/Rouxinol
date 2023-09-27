#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
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
typedef pair<P,int> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-8;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};

const int m=26;
int n;
vl a;
vvl b;

int main(){
	cin>>n;
	a=vl(m);
	b=vvl(n,vl(m));
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>b[i][j];
	ll res=0;
	vl c(m,-1);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		x--;
		res+=b[i][x];
		c[x]=i;
		for(int j=0;j<m;j++) res-=a[j]*(i-c[j]);
		cout<<res<<endl;
	}
}