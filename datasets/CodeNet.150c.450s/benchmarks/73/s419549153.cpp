#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define each(a, b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define pb push_back
#define show(x) cout <<#x<<" = "<<(x)<<endl
#define spair(p) cout <<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(kbrni,v.size())cout<<" "<<v[kbrni];cout<<endl
#define sset(s) cout<<#s<<":";each(kbrni,s)cout <<" "<<kbrni;cout<<endl

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;

//i???1-n?????§?????????
//i???????????§??????????¨??????????(i???1????????????)
//i???????????????x????????????(i???1????????????)
template<class V> class BIT {
private:
	int n;
	vector<V> bit;

public:
	void add(int i,V x)
	{
		while(i <= n){
			bit[i] += x;
			i += i & -i;
		}
	}
	V sum(int i)
	{
		V s = 0;
		while(i>0){
			s += bit[i];
			i -= i & -i;
		}
		return s;
	}
	//?????????????????????0?????´???
	BIT(int sz){
		n = sz+1;
		bit.resize(sz+1,0);
	}
	BIT(vector<V> v) {
		int sz = (int)v.size();
		n = sz;
		bit.resize(n+1);
		rep(i,n){
			 add(i+1,v[i]);
		}
	}
};

int main()
{
	int n,q;
	cin >> n >> q;
	BIT<int> bt(n);
	rep(i,q){
		int a;
		cin >> a;
		if(a == 0){
			int x,y;
			cin >> x >> y;
			bt.add(x,y);
		}else{
			int x,y;
			cin >> x >> y;
			cout << bt.sum(y) - bt.sum(x-1) << "\n";
		}
	}
}