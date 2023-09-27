#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using msi = map<string, int>;
using mii = map<int, int>;
using psi = pair<string, int>;
using pii = pair<int, int>;
using vlai = valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1E9
#define EPS 1E-9
#define MOD (ll)(1E9+7)
#define PI 3.1415926535897932384

template <class T>ostream &operator<<(std::ostream &o, const vector<T> &v)
{
	rep(i, v.size()) {
		o << (i > 0 ? " " : "") << v[i];
	}
	return o;
}



int main() {
	int n, a, b, c, x,xini;
	while (1) {
		int frame=0,now=0;
		cin >> n >> a >> b >> c >> x;
		xini = x;
		if (n == 0) break;
		vi v(n, 0);
		rep(i, n) {
			cin >> v[i];
		}
		if(v[0]==x){
		    now++;
		}
		while(frame<=10001&&now<n){
		    if((a*x+b)%c==v[now]){
		        now++;
		    }
		    x=(a*x+b)%c;
		    frame++;
		}
		if(frame>=10001){
		    cout<<-1<<endl;
		}else{
		    cout<<frame<<endl;
		}
	}
}

