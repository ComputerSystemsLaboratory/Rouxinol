#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

struct NODE{
	int d, p;
	NODE(){d = p = 0;}
	NODE(int d, int p):d(d), p(p){}
	
	bool operator<(const NODE r){
		return p > r.p;
	}
};

int main() {
	
	int n, m;
	while(cin >> n >> m, n){
		vector<NODE> v(n);
		rep(i, n){
			int d, p;
			cin >> d >> p;
			v[i] = NODE(d, p);
		}
		
		SORT(v);
		int ans = 0;
		rep(i, n){
			if(m >= v[i].d) m-= v[i].d;
			else{
				ans += (v[i].d - m) * v[i].p;
				m = 0;
			}
		}
		
		cout << ans << endl;
	}


	return 0;
}