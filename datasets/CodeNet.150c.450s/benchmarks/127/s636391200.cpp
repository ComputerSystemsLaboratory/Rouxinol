#include <bits/stdc++.h>
using namespace std;

#define INF 1.1e9
#define LINF 1.1e18
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define BIT(x,n) bitset<n>(x)
#define PI 3.14159265358979323846

typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> PP;

//-----------------------------------------------------------------------------

int m;
string s;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin>>m;
	REP(i,m) {
		cin>>s;
		set<string> st;
		int sz=(int)s.size();
		REP(i,sz) {
			string a,b,c,d;
			a=s.substr(0,i),b=s.substr(i);
			c=a,d=b;
			reverse(ALL(c));reverse(ALL(d));
			st.insert(a+b);st.insert(b+a);
			st.insert(a+d);st.insert(d+a);
			st.insert(c+b);st.insert(b+c);
			st.insert(c+d);st.insert(d+c);
		}
		cout<<st.size()<<endl;
	}

	return 0;
}

