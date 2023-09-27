#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(x) for(auto it=(x).begin();it!=(x).end();it++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
//#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

template <typename T>
struct Combination {
	vector<T> fc,ifc;
	T MOD;
	int sz;
 
	Combination(T MOD,T sz):fc(sz+1),ifc(sz+1),MOD(MOD),sz(sz) {}
 
	void init() {
		fc[0]=1;
		for(int i=1;i<=sz;i++) fc[i]=fc[i-1]*i%MOD;
		ifc[sz]=inv(fc[sz]);
		for(int i=sz-1;i>=0;i--) ifc[i]=ifc[i+1]*(i+1)%MOD;
	}
 
	// 階乗
	T fact(int n) {
		return fc[n];
	}
	// 階乗の逆元
	T inv_fact(int n) {
		return ifc[n];
	}
	//逆元
	T inv(int n) {
		return pow(n,MOD-2);
	}
	// 冪乗
	T pow(T n,int a) {
		T res=1;
		while(a>0) {
			if(a&1) (res*=n)%=MOD;
			(n*=n)%=MOD;
			a>>=1;
		}
		return res;
	}
	// 順列
	T perm(T n,T r) {
		if(r<0||n<r) return 0;
		return fc[n]*ifc[n-r]%MOD;
	}
	// 組み合わせ
	T comb(T n,T r) {
		if(n<0||r<0||n<r) return 0;
		return fc[n]*ifc[r]%MOD*ifc[n-r]%MOD;
	}
	// 重複組み合わせ
	T multi_comb(T n,T r) {
		if(n<0||r<0) return 0;
		return r==0?1:comb(n+r-1,r);
	}
};

//使い方
//Combination<ll> 変数(MOD,1e6*2+10);
//Combination<ll> C((int)1e9+7,(int)1e6*2+10);
//C.init();

int main(){
    Combination<ll> C((int)1e9+7,(int)1e6*2+10);
    C.init();
    
    ll m,n;
    cin>>m>>n;
    cout<<C.pow(m,n)<<endl;
    
    
    
    
    
    return 0;
}

