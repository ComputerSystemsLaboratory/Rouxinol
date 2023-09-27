#include <iostream>
#include <fstream>
#include <cassert>
#include <typeinfo>
#include <vector>
#include <stack>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#include <random>
#include <time.h>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
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
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef vector<pll> vpll;
typedef pair<P,int> pip;
typedef vector<pip> vip;
const int inf=1<<28;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-8;
const ll mod=1e9+7;
const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

const int M=2000000;

vi f(vi a){
	int S=a.size();
	vi b(M);
	for(int i=0;i<S;i++) for(int j=0;j<i;j++) b[a[i]-a[j]]++;
	return b;
}

int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0) return 0;
		vi a(n+1),b(m+1);
		for(int i=0;i<n;i++){
			int A;
			cin>>A;
			a[i+1]=a[i]+A;
		}
		for(int i=0;i<m;i++){
			int B;
			cin>>B;
			b[i+1]=b[i]+B;
		}
		vi c=f(a),d=f(b);
		ll res=0;
		for(int i=0;i<M;i++) res+=c[i]*d[i];
		cout<<res<<endl;
	}
}