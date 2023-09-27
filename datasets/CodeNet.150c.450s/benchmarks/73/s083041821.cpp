#include <bits/stdc++.h>
using namespace std;

using VI = vector<int>;
using VVI = vector<VI>;
using PII = pair<int, int>;
using LL = long long;
using VL = vector<LL>;
using VVL = vector<VL>;
using PLL = pair<LL, LL>;
using VS = vector<string>;

#define ALL(a)  begin((a)),end((a))
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SORT(c) sort(ALL((c)))
#define RSORT(c) sort(RALL((c)))
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define FF first
#define SS second

#define DUMP(x) cout<<#x<<":"<<(x)<<endl
template<class S, class T>
istream& operator>>(istream& is, pair<S,T>& p){
  return is >> p.FF >> p.SS;
}
template<class T>
istream& operator>>(istream& is, vector<T>& xs){
  for(auto& x: xs)
	is >> x;
  return is;
}
template<class S, class T>
ostream& operator<<(ostream& os, const pair<S,T>& p){
  return os << p.FF << " " << p.SS;
}
template<class T>
ostream& operator<<(ostream& os, const vector<T>& xs){
  for(unsigned int i=0;i<xs.size();++i)
	os << (i?" ":"") << xs[i];
  return os;
}
template<class T>
void maxi(T& x, T y){
  if(x < y) x = y;
}
template<class T>
void mini(T& x, T y){
  if(x > y) x = y;
}


const double EPS = 1e-10;
const double PI  = acos(-1.0);
const LL MOD = 1e9+7;


class BIT{
private:
  int n;
  VI bit;
public:
  BIT(int n_){
	n = n_;
	bit.assign(n+1, 0);
  }

  // return bit[1] + ... + bit[i]
  int sum(int i){
	int s = 0;
	while(i > 0){
	  s += bit[i];
	  i -= i & -i;
	}
	return s;
  }

  // bit[i] += x
  void add(int i, int x){
	while(i <= n){
	  bit[i] += x;
	  i += i & -i;
	}
  }

  int lower_bound(int x){
	if(x <= 0) return 0;
	int i = 1;
	for(;i<=n;i<<=1);
	i >>= 1;
	int res = 0;
	for(;i>0;i>>=1){
	  if(res+i <= n && bit[res+i] < x){
		x -= bit[res+i];
		res += i;
	  }
	}
	return res+1;
  }
};

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;
  BIT bit(N+1);
  while(Q--){
	int c, x, y;
	cin >> c >> x >> y;
	if(c == 0){
	  bit.add(x, y);
	}
	else{
	  cout << bit.sum(y) - bit.sum(x-1) << endl;
	}
  }

  return 0;
}

