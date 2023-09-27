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
typedef pair<ll,P> PP;

//-----------------------------------------------------------------------------

template< typename T >
map<T,int> prime_factorization(T n) {
	map<T,int> res;
	for(T i=2;i*i<=n;i++) {
		while(n%i==0) {
			res[i]++;
			n/=i;
		}
	}
	if(n!=1) res[n]=1;
	return res;
}

vector<bool> eratosthenes(int n) {
	vector<bool> is_prime(n+1,true);
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i*i<=n;i++) {
		if(is_prime[i]) {
			for(int j=2*i;j<=n;j+=i) {
				is_prime[j]=false;
			}
		}
	}
	return is_prime;
}

vector<int> prime_list(int n) {
	vector<int> res;
	auto is_prime=eratosthenes(n);
	for(int i=0;i<=n;i++) {
		if(is_prime[i]) {
			res.push_back(i);
		}
	}
	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll n;cin>>n;
	auto ls=prime_factorization(n);
	cout<<n<<':';
	for(auto x:ls) {
		REP(i,x.se) cout<<' '<<x.fi;
	}
	cout<<endl;

}

