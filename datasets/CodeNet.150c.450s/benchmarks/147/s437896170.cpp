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
typedef pair<P,int> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-8;
const ll mod=1e9+7;
const int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
/*
ll Pow(ll n,ll p){
	ll r=1;
	for(;p>0;p>>=1){
		if(p&1) r=(r*n)%mod;
		n=(n*n)%mod;
	}
	return r;
}

const int M=2000005;
ll F[M];

void Init(){
	F[0]=1;
	for(int i=1;i<M;i++) F[i]=F[i-1]*i%mod;
}

ll Div(ll n,ll m){
	return n*Pow(m,mod-2)%mod;
}

ll nCk(ll n,ll k){
	return Div(F[n],F[n-k]*F[k]%mod);
}

ll nPk(ll n,ll k){
	return nCk(n,k)*F[k]%mod;
}*/

const int M=10000;
int a[M+1],n;

int main(){
	for(int i=1;i<=100;i++) for(int j=1;j<=100;j++) for(int k=1;k<=100;k++){
		int t=i*i+j*j+k*k+i*j+j*k+k*i;
		if(t<=M) a[t]++;
	}
	cin>>n;
	for(int i=1;i<=n;i++) cout<<a[i]<<endl;
}