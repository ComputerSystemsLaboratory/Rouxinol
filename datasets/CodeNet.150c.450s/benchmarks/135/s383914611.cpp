#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;
static const double EPS = 1e-12;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define sz(a) a.size()
#define all(a) a.begin(),a.end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SS stringstream
#define DBG1(a) rep(_X,sz(a)){printf("%d ",a[_X]);}puts("");
#define DBG2(a) rep(_X,sz(a)){rep(_Y,sz(a[_X]))printf("%d ",a[_X][_Y]);puts("");}
#define bitcount(b) __builtin_popcount(b)
#define REP(i, s, e) for ( int i = s; i <= e; i++ )  

int main(){
	int n,m,s,t;
	while(cin >> n >> m ,n ){
		int ret = 0;
		vector<int> a(1,0),b(1,0);
		
		vector<int> tate,yoko;
		
		s = 0;
		rep(i,n){
			cin >> t;
			s += t;
			a.push_back(s);
		}
		s = 0;
		rep(i,m){
			cin >> t;
			s += t;
			b.push_back(s);
		}
		rep(i,a.size()){
			for(int j=i+1;j<a.size();j++){
				tate.push_back(a[j]-a[i]);
			}
		}
		rep(i,b.size()){
			for(int j=i+1;j<b.size();j++){
				yoko.push_back(b[j]-b[i]);
			}
		}
		sort(all(tate));
		sort(all(yoko));
		rep(i,tate.size()){
			ret += upper_bound(all(yoko),tate[i])-lower_bound(all(yoko),tate[i]);
		}
		cout << ret << endl;
	}
}