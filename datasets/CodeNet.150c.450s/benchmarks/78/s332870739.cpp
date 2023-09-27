#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
using namespace std;

#define reep(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) reep((i),0,(n))
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second
#define mkp make_pair

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vint;
static const int INF=1<<24;

vector<pii> a(1000010);
//int b[5]={1,4,10,20,35};
//int c[3]={1,10,35};
int main(){
	int n;
	vint b,c;
	ll lim=1000010;
	for(ll i=0;i<lim;i++){
		a[i]=mkp(INT_MAX,INT_MAX);
		//cout<<a[i].S<<endl;
	}
	a[0]=mkp(0,0);
	rep(i,1000000){
		if(!i) continue;
		int t=i*(i+1)*(i+2)/6;
		if(t>1000000) break;
		b.PB(t);
		if(t&1) c.PB(t);//cout<<t<<endl;
	}
	// for(int i=1;i<INT_MAX;i+=2){
		// int t=i*(i+1)*(i+2)/6;
		// if(t>1000000) break;
		// c.PB(t);
		//cout<<t<<endl;
	// }
	rep(i,b.size()){
		int t=b[i];
		while(t<=lim){
			a[t].F=min(a[t].F,a[t-b[i]].F+1);
			t++;
		}
	}
	//cout<<"hoge"<<endl;
	rep(i,c.size()){
		int t=c[i];
		while(t<=lim){
			a[t].S=min(a[t].S,a[t-c[i]].S+1);
			//if(t==14) cout<<a[t].S<<" "<<c[i]<<endl;
			t++;
		}
	}
	while(cin>>n,n){
		cout<<a[n].F<<" "<<a[n].S<<endl;
	}
	return 0;
}