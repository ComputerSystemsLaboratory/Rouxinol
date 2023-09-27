#include <iostream>
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

vint v(1500010);

int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		rep(i,1500010) v[i]=0;
		vint h(n);
		rep(i,n){
			cin>>h[i];
		}
		rep(i,n){
			ll S=0;
			for(int j=i;j<n;j++){
				S+=h[j];
				v[S]++;
			}
		}
		vint w(m);
		rep(i,m){
			cin>>w[i];
		}
		ll ans=0;
		rep(i,m){
			ll S=0;
			for(int j=i;j<m;j++){
				S+=w[j];
				//cout<<"S v[S] "<<S<<" "<<v[S]<<endl;
				ans+=v[S];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}